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
#define no cout << "No\n";
#define yes cout << "Yes\n";

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
    int n, m, k;
    cin >> n >> m >> k;

    vi head(n), body(m);
    cin >> head;
    cin >> body;

    sort(all(head));
    sort(all(body));
    // 2 7 1 8 2 8

    // 1 2 2 7 8 8
    // 1 2 4 5 5 8
    //    k == total robot
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        auto it = lower_bound(body.begin() + j, body.end(), head[i]);
        if (it == body.end())
        {
            break;
        }
        cnt++;
        j = (it - body.begin()) + 1;
        if (cnt >= k)
        {
            yes;
            return;
        }
    }

    no;
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
