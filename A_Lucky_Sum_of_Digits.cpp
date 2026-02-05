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

bool isLucky(ll n)
{
    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

// 744 = 15
vi allLucky(ll n)
{
    vi arr;
    for (int i = 1; i <= 1e6; i++)
    {
        if (isLucky(i))
        {
            arr.push_back(i);
        }
    }
    return arr;
}

void Sokan_El_Leil()
{
    ll n;
    cin >> n;

    // string s = "";

    // while (n > 0 && n % 7 != 0)
    // {
    //     n -= 4;
    //     s.push_back('4');
    // }

    // while (n > 0 && n % 7 == 0)
    // {
    //     n -= 7;
    //     s.push_back('7');
    // }

    // if (n == 0)
    // {
    //     cout << s;
    // }
    // else
    // {
    //     cout << -1;
    // }

    int four = -1;
    int sev = -1;

    for (int i = n / 7; i >= 0; i--)
    {
        int rem = n - i * 7;
        if (rem % 4 == 0 && rem >= 0)
        {
            sev = i;
            four = rem / 4;
            break;
        }
    }

    if (four == -1)
    {
        cout << -1;
    }
    else
    {

        for (int i = 0; i < four; i++)
        {
            cout << 4;
        }
        for (int i = 0; i < sev; i++)
        {
            cout << 7;
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
