#include <bits/stdc++.h>
using namespace std;

// g++ -g -O0 temp.c++ -o temp
// gdb ./temp
// ctrl + shift + b
// f5

// ===================== MACROS ===================== //
#define rep(i, x, n) for (int i = x; i < (int)(n); i++)
#define all(vec) vec.begin(), vec.end()

template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}

#define str   \
    string s; \
    cin >> s;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ull unsigned long long
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define pri pair<int, int>
#define prl pair<ll, ll>

#define ln "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

#define dd     \
    int n;     \
    cin >> n;  \
    vi arr(n); \
    cin >> arr;

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const int MOD = 1e7;

ll n, m;
bool canProduce( vi& t, long long total_time, int target_products) {
    long long total_products = 0;
    for (int time_per_product : t) {
        total_products += (total_time / time_per_product);
        // إذا وصلنا للمطلوب مبكرًا نقوم بإنهاء الدالة لتوفير الوقت
        if (total_products >= target_products) {
            return true;
        }
    }
    return total_products >= target_products;
}
void Sokan_El_Leil()
{
    cin >> n;
    vi arr(n);
    cin >> arr;

    ll t;
    cin >> t;

    while (t--)
    {
         int x;
        cin >> x;

        // البحث الثنائي على الوقت (Binary Search on Answer)
        long long low = 0;
        long long high = 100005; // تم تحديد هذا الحد بناءً على جملة الضمان في المسألة
        long long answer = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (canProduce(arr, mid, x)) {
                answer = mid;       // وقت محتمل، نقوم بحفظه
                high = mid - 1;    // نبحث عن وقت أقل (أفضل)
            } else {
                low = mid + 1;     // الوقت غير كافٍ، نحتاج لزيادته
            }
        }

        cout << answer << "\n";
    }
}

int32_t main()
{
    ios;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Sokan_El_Leil();
    }
}
