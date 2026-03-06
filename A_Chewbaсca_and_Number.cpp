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

// This problecm dosn't contain logic but you can solve it by sense
void Sokan_El_Leil()
{
    string s;
    cin >> s;
    // int mn = INT_MAX;
    // rep(i, 0, (int)s.size())
    // {
    //     int ch = s[i] - '0';
    //     if (ch < mn)
    //     {
    //         mn = ch;
    //     }
    // }

    if ((int)s.size() == 1)
    {
        cout << s << "\n";
        return;
    }

    string tmp = "";
    rep(i, 0, (int)s.size())
    {
        int t = s[i] - '0';
        int res = t;
        // check if index = 0 && value = 9 print it as = 9;
        if (i == 0)
        {
            if (s[i] == '9')
            {
                cout << s[i];
                continue;
            }
        }

        // whiile res >= 5 subtract 
        while (res >= 5)
        {
            res = 9 - res;
        }
        cout << res;
    }
    cout << "\n";
}

// 71723447
// 8772

// 91730629
// 91230320
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
