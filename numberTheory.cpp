/*
___________________________________________________________________________________________________
                             بِسْمِ اللَّـهِ الرَّحْمَـ ٰنِ الرَّحِيمِ
___________________________________________________________________________________________________
                                     Author Atwaa
___________________________________________________________________________________________________

Time : O( )
Space : O( )
___________________________________________________________________________________________________
*/

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

#define ull unsigned long long
#define ll long long
#define int ll
#define vi vector<ll>
#define vvi vector<vi>

// ==================
// 2D array
// vector<vector<int>> arr(rows, vector<int>(cols));
// vvi arr(n, vi(m));
// ==================

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

inline int fixMod(int x, int m) // O(1)
{
    x %= m;
    if (x < 0)
        x += m;
    return x;
}

inline vi getDivisors(int n) // O(sqrt(n))
{
    vi div;
    int i = 1;
    for (; i * i < (n); i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
            div.push_back(n / i);
        }
    }
    if (i * i == n)
        div.push_back(i);

    sort(all(div));
    return div;
}

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

inline bool isPrime(int n) // O(sqrt(n))
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

inline vi getAllPrimes(int n)
{ // O(n)
    vi primes;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int n;
vector<bool> isprime;

void sieve()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

inline void Sokan_El_Leil()
{
    cin >> n;
    isprime.assign(n + 1, true); // initialize vector

    sieve();

    for (int i = 0; i <= n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
        }
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