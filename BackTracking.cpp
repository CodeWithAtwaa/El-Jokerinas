/*
___________________________________________________________________________________________________
                                   بِسْمِ اللَّـهِ الرَّحْمَـ ٰنِ الرَّحِيمِ
___________________________________________________________________________________________________
    Author Atwaa
___________________________________________________________________________________________________
    Time : O(N * M)
    Space : O(N * M)
___________________________________________________________________________________________________
*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, x, n) for (int i = x; i < (int)(n); i++)
#define all(vec) vec.begin(), vec.end()

#define ll long long
#define int ll
#define vi vector<ll>
#define vvi vector<vi>

#define ln "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

string grid[101];
int n, m;
string res;
bool found = false;

bool path(int x, int y)
{
    if (x >= n || y >= m || grid[x][y] == '#')
    {
        return false;
    }

    if (grid[x][y] == 'E')
    {
        cout << res << "\n";
        return true;
    }

    res.push_back('D');
    if (path(x + 1, y))
        return true;
    res.pop_back();

    res.push_back('R');
    if (path(x, y + 1))
        return true;
    res.pop_back();

    return false;
}

inline void Sokan_El_Leil()
{
    cin >> n >> m;
    int start_x = 0, start_y = 0;

    rep(i, 0, n)
    {
        cin >> grid[i];
        rep(j, 0, m)
        {
            if (grid[i][j] == 'S')
            {
                start_x = i;
                start_y = j;
            }
        }
    }

    res = "";
    if (!path(start_x, start_y))
    {
        cout << "No Path Found\n";
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
    return 0;
}
