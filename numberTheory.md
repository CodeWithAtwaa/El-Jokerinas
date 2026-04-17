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
    if (x < 0)
    //  لو عاوز تجيب المكافء اجمع عليه الاب .
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

    sort(all(div));
    return div;
}
```

## All Multiples

- sqrt(num)

```cpp
inline vi getMultiples(int n) // O(sqrt(n))
{
    vi mul;
    int i = 1;
    for (; i * i < (n); i++)
    {
        mul.push_back(i * n);
    }
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

inline vi getAllPrimes(int n ) { //O(n)
    vi primes;
    for (int i = 2; i <= n; i++) {
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
int n;
vector<bool> isprime;

void sieve() {
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isprime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
}
```