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

const int MOD = 1e6 + 5;

ll sumOfAll(ll n, ll m)
{
    ll sum = 0;
    for (ll i = min(n, m); i <= max(n, m); i++)
    {
        sum += i;
    }
    return sum;
}
ll sumOfEven(ll n, ll m)
{
    ll sum = 0;
    for (ll i = min(n, m); i <= max(n, m); i++)
    {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}
ll sumOfODD(ll n, ll m)
{
    ll sum = 0;
    sum = sumOfAll(n ,m) - sumOfEven(n,m);
    return sum;
}

void Sokan_El_Leil()
{
    ll n, m;
    cin >> n >> m;

    cout << sumOfAll(n,m) << "\n";
    cout << sumOfEven(n,m) << "\n";
    cout << sumOfODD(n,m) << "\n";
}

int main()
{
    ios;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Sokan_El_Leil();
    }
}
