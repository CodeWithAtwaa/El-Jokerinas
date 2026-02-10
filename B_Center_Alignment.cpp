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
    string s;
    vector<string> arr;
    int mx = 0;

    while (getline(cin, s))
    {
        arr.push_back(s);
    }

    for (auto &it : arr)
    {
        mx = max(mx, (int)it.size());
    }

    int sz = mx + 2;
    // start side
    cout << string(sz, '*');
    cout << "\n";

    bool left = true;
    for (auto &it : arr)
    {
        // start for every line
        cout << '*';
        int l = 0, r = 0;

        int d = mx - (int)it.size();
        if (d % 2 == 0)
        {
            l = r = d / 2;
        }
        else
        {
            if (left)
            {
                l = d / 2;
                r = d / 2 + 1;
            }
            else
            {
                l = d / 2 + 1;
                r = d / 2;
            }
            left = !left;
        }

        cout << string(l, ' ') << it << string(r, ' ');
        cout << "*\n";
    }

    // end side
    cout << string(sz, '*');
    cout << "\n";
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
