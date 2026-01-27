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
    int n, q;
    cin >> n >> q;
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(all(arr));
    while (q--)
    {
        string s;
        ll x, y;
        cin >> s >> x >> y;
        prl p = {x, y};
        if (s == "lower")
        {
            ll l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                ll mid = l + (r - l) / 2;
                if (arr[mid] < p)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            cout << ans << "\n";
        }
        else if (s == "upper")
        {
            ll l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                ll mid = l + (r - l) / 2;
                if (arr[mid] > p)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << ans << "\n";
        }
        else if (s == "find")
        {
            int l = 0, r = n - 1;
            bool found = false;
            while (l <= r)
            {
                int m = (l + r) / 2;
                if (arr[m] == p)
                {
                    found = true;
                    break;
                }
                else if (arr[m] < p)
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
            cout << (found ? "found" : "not found") << "\n";
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
