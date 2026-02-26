#include <bits/stdc++.h>
using namespace std;

// g++ -g -O0 tmp.c++ -o tmp
// gdb ./tmp
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

void Sokan_El_Leil()
{
    ll n;
    cin >> n;
    ll tmp = n;
    ll k = 1;
    if (tmp % 2 == 0)
    {
        k *= 2;
        while (tmp % 2 == 0)
        {
            tmp /= 2;
        }
    }
    for (ll i = 3; i * i <= tmp; i += 2)
    {
        if (tmp % i == 0)
        {
            k *= i;
            while (tmp % i == 0)
            {
                tmp /= i;
            }
        }
    }
    if (tmp > 1)
    {
        k *= tmp;
    }
    cout << k << "\n";
}

int32_t main()
{
    ios;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Sokan_El_Leil();
    }
}
