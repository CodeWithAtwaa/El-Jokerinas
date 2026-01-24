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

void Sokan_El_Leil()
{
    int n;
    cin >> n;
    string arr[3][n];

    map<string, int> mp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            mp[arr[i][j]]++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int tot = 0;
        for (int j = 0; j < n; j++)
        {
            if (mp[arr[i][j]] == 1)
            {
                tot += 3;
            }
            else if (mp[arr[i][j]] == 2)
            {
                tot++;
            }
        }
        cout << tot << ' ';
    }
    cout << "\n";
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
