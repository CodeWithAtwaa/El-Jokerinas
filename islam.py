import time

# محاولة استيراد GPIO الحقيقي
try:
    import RPi.GPIO as GPIO
    REAL_PI = True

except Exception:
    print("⚠️ أنت لا تعمل على Raspberry Pi — تم تشغيل وضع المحاكاة")

    REAL_PI = False

    class MockGPIO:
        BCM = "BCM"
        OUT = "OUT"
        IN = "IN"
        HIGH = 1
        LOW = 0

        def setwarnings(self, x):
            pass

        def setmode(self, x):
            pass

        def setup(self, *args):
            pass

        def output(self, *args):
            pass

        def input(self, *args):
            return 0

        def cleanup(self):
            pass

    GPIO = MockGPIO()


# --- إعدادات الـ GPIO ---
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)

LDR_PIN = 17
TRIG = 23
ECHO = 24
RELAY_PIN = 18

GPIO.setup(LDR_PIN, GPIO.IN)
GPIO.setup(TRIG, GPIO.OUT)
GPIO.setup(ECHO, GPIO.IN)
GPIO.setup(RELAY_PIN, GPIO.OUT)

# الحالة الابتدائية: المصباح مطفأ
GPIO.output(RELAY_PIN, GPIO.HIGH)

def get_distance():
    GPIO.output(TRIG, False)
    time.sleep(0.1)

    GPIO.output(TRIG, True)
    time.sleep(0.00001)
    GPIO.output(TRIG, False)

    pulse_start = time.time()
    pulse_end = time.time()

    timeout = time.time()

    while GPIO.input(ECHO) == 0:
        pulse_start = time.time()
        if time.time() - timeout > 0.5:
            return 400

    timeout = time.time()

    while GPIO.input(ECHO) == 1:
        pulse_end = time.time()
        if time.time() - timeout > 0.5:
            return 400

    duration = pulse_end - pulse_start
    distance = (duration * 34300) / 2

    return distance

try:
    print("--- نظام الإنارة الذكي قيد التشغيل ---")

    while True:
        # قراءة الـ LDR
        is_dark = GPIO.input(LDR_PIN) == GPIO.HIGH
        status_ldr = "ظلام" if is_dark else "إضاءة"

        # قراءة الألتراسونيك
        dist = get_distance()
        status_motion = "جسم مكتشف!" if dist < 50 else "لا يوجد حركة"

        print("-" * 30)
        print(f"حالة الـ LDR: {status_ldr}")
        print(f"حالة الألتراسونيك: {status_motion} (المسافة: {dist:.1f} سم)")

        # التحكم في الريليه
        if is_dark:
            if dist < 50:
                print(">>> تشغيل المصباح")
                GPIO.output(RELAY_PIN, GPIO.LOW)

                time.sleep(60)

                GPIO.output(RELAY_PIN, GPIO.HIGH)
                print(">>> إطفاء المصباح")
            else:
                print(">>> لا توجد حركة")
                GPIO.output(RELAY_PIN, GPIO.HIGH)
        else:
            print(">>> يوجد ضوء نهار")
            GPIO.output(RELAY_PIN, GPIO.HIGH)

        time.sleep(2)

except KeyboardInterrupt:
    print("\nإغلاق النظام...")
    GPIO.cleanup()