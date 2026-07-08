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
int n;

bool isPrime(long long x)
{
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (long long i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;

    return true;
}
inline void Sokan_El_Leil()
{
    cin >> n;

    // sieve(n);

    if (isPrime(n))
    {
        cout << 1 << "\n";
        cout << n << "\n";
        return;
    }

    ll m = n - 3;
    for (int i = 2; i <= m; i++)
    {
        if (isPrime(i) && isPrime(m - i))
        {
            cout << 3 << "\n";
            cout << 3 << " " << i << " " << m - i << "\n";
            return;
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
