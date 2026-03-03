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
    vi arr(n);
    cin >> arr;

    int cnt = 0;
    int cntodd = 0;
    map<int, int> mp1;
    map<int, int> mp2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cnt++;
            mp1[i] = cnt;
        }
        if (arr[i] % 2 != 0)
        {
            cntodd++;
            mp2[i] = cntodd;
        }
    }

    size_t a = 0, b = 0;
    for (auto it : mp1)
    {
        // cout << it.first << " " << it.second << "\n";
        a = it.first;
    }

    for (auto it : mp2)
    {
        // cout << it.first << " " << it.second << "\n";
        b = it.first;
    }

    if (mp1.size() > mp2.size())
    {
        cout << b + 1 << "\n";
    }
    else
    {
        cout << a + 1 << "\n";
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
