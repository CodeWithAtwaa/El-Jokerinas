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
#define int ll

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
    int n, m;
    cin >> n >> m;
    // idx   value
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i].first = x;
        arr[i].second = i + 1;
    }

    sort(all(arr));

    // for (auto it : arr)
    // {
    //     cout << it.first << " " << it.second << "\n";
    // }
    // cout << endl;

    int l = 0, r = n - 1;
    while (l < r)
    {
        int sum = arr[l].first + arr[r].first;

        if (sum == m)
        {
            cout << arr[r].second << " " << arr[l].second << "\n";
            return;
        }
        else if (sum > m)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    // cout << -1 << "\n";
    cout << "IMPOSSIBLE" << "\n";
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
