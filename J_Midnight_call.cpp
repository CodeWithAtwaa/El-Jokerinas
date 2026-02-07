#include <bits/stdc++.h>
using namespace std;

// g++ -g -O0 temp.c++ -o temp
// gdb ./temp
// ctrl + shift + b
// f5

// ===================== MACROS ===================== //
#define rep(i, x, n) for (ll i = x; i < (ll)(n); i++)
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
#define pri pair<ll, ll>
#define prl pair<ll, ll>

#define ln "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

#define dd     \
    ll n;      \
    cin >> n;  \
    vi arr(n); \
    cin >> arr;

#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

const ll MOD = 1e7;

void Sokan_El_Leil()
{
    ll n;
    cin >> n;

    vi arr(n + 10);
    for (ll i = 0; i <= n; ++i)
    {
        cin >> arr[i];
    }

    vi res(n + 10, INT_MAX);
    res[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                ll dis = i - j;
                int dis2 = i - (arr[i] / j);

                if (dis >= 0)
                {
                    res[i] = min(res[i], res[dis] + 1);
                }
                if (dis2 >= 0)
                {
                    res[i] = min(res[i], res[dis2] + 1);
                }
            }
        }
    }

    if (res[n] >= INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << res[n] << endl;
    }
}

int32_t main()
{
    ios;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Sokan_El_Leil();
    }
}
















