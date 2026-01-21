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
    set<ll> st;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "insert")
        {
            ll x;
            cin >> x;

            st.insert(x);
        }
        else if (s == "lower_bound")
        {
            ll x;
            cin >> x;

            auto lower = st.lower_bound(x);
            if (lower != st.end())
            {
                cout << *lower << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (s == "upper_bound")
        {
            ll x;
            cin >> x;
            auto upper = st.upper_bound(x);

            if (upper != st.end())
            {
                cout << *upper << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (s == "find")
        {
            ll x;
            cin >> x;

            auto it = st.find(x);
            if (it != st.end())
            {
                cout << "found" << "\n";
            }
            else
            {
                cout << "not found\n";
            }
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
