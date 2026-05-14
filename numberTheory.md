# Number Theory

## Divsion Algorithm

- `a = qb + r`
- a = البسط => Numerator ,
- b = المقام => Denominator, Divisors
- q = /
- r = %
- `0 <= r < b`
- لو عاوز تجيب المكافء اجمع عليه الاب .

```cpp
inline int fixMod(int x, int m)
{
    x %= m;

    //  لو عاوز تجيب المكافء اجمع عليه الاب .
    if (x < 0)
        x += m;
    return x;
}
```

## All Divisors

- sqrt(num)

```cpp
inline vi getDivisors(int n) // O(sqrt(n))
{
    vi div;
    int i = 1
    for (; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            div.push_back(n / i);
        }
    }

    if( i == sqrt(n))
        div.push_back(i);

    return div;
}
```

## All Multiples

- sqrt(num)

```cpp
inline vector<int> getMultiples(int x, int n) // O(n / x)
{
    if (x <= 0) return {};

    vector<int> mul;
    mul.reserve(n / x);

    for (int i = x; i <= n; i += x)
        mul.push_back(i);

    return mul;
}
```

## Prime numbers

- divisors on itself and one

```cpp
inline bool isPrime(int n) // O(sqrt(n))
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

inline vi getAllPrimes(int n ) { //O(sqrt(n))
    vi primes;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}
```

# Sieve of Eratosthenes

- افترض أن كل الأعداد Prime في البداية ما عدا 0 و 1.
- نمرّ على الأعداد من 2 إلى √n.
- إذا كان العدد مازال Prime:
- نقوم بجعل كل مضاعفاته Not Prime.

```cpp
vector<bool> isprime;

void sieve(int n) { // O(n log log n)
    isprime.assign(n + 1, true);
    isprime[0] = isprime[1] = false;

    for (long long i = 2; i * i <= n; i++) {
        if (isprime[i]) {
            for (long long j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
}
```

## The fundamentail therom of arithmatic

```
n = p1^e1 * p2^e2 * p3^e3* ...... *px^ex
```

## All prime factorization

```c++
inline vi getPrimeFactorization(int n)
{ // Best: O(log n) , worest = O(n)
    vi res;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            res.push_back(i);
        }
    }
    if (n > 1)
        res.push_back(n);

    return res;
}
```

## GCD , LCM

```cpp
    // GCD
    cout << gcd(a , b );

    // LCM
    cout << lcm(a , b );
    lcm = a * b / gcd(a, b)
```
