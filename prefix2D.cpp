/*
___________________________________________________________________________________________________
                             بِسْمِ اللَّـهِ الرَّحْمَـ ٰنِ الرَّحِيمِ
___________________________________________________________________________________________________
                                     Author Atwaa
___________________________________________________________________________________________________

Time : O( n * m + q)
Space : O( n*m )
___________________________________________________________________________________________________
*/

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
#define int ll
#define vi vector<ll>
#define vvi vector<vi>
#define pri pair<int, int>
#define prl pair<ll, ll>

// ==================
// 2D array
// vector<vector<int>> arr(rows, vector<int>(cols));
// vvi arr(n, vi(m));
// ==================

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
    int n, m, q;
    cin >> n >> m >> q;

    vvi arr(n + 5, vi(m + 5, 0));
    vvi prefix(n + 5, vi(m + 5, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // prefix for rows
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix[i][j] = prefix[i][j - 1] + arr[i][j];
        }
    }

    // prefix for columns
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix[i][j] += prefix[i - 1][j];
        }
    }

    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int res = prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
        cout << res << "\n";
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