/*
___________________________________________________________________________________________________
                             بِسْمِ اللَّـهِ الرَّحْمَـ ٰنِ الرَّحِيمِ
___________________________________________________________________________________________________
                                     Author Atwaa
___________________________________________________________________________________________________

Time : O( )
Space : O( )
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

#define ull unsigned long long
#define ll long long
#define int ll
#define vi vector<ll>
#define vvi vector<vi>
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

inline void dfs(int u, vector<vi> &adj, vi &a, int id)
{
    a[u] = id;

    for (int v : adj[u])
    {
        if (a[v] == -1)
            dfs(v, adj, a, id);
    }
}

inline void Sokan_El_Leil()
{
    int n, x, y;
    cin >> n >> x >> y;

    vi p(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> p[i];

    vector<vi> adj(n + 1);

    for (int i = 1; i <= n; i++)
    {
        if (i + x <= n)
        {
            adj[i].push_back(i + x);
            adj[i + x].push_back(i);
        }

        if (i + y <= n)
        {
            adj[i].push_back(i + y);
            adj[i + y].push_back(i);
        }
    }

    vi a(n + 1, -1);
    int id = 0;

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == -1)
        {
            dfs(i, adj, a, id);
            id++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[p[i]])
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
