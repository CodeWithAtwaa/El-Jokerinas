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

inline void Sokan_El_Leil()
{
    string s;
    cin >> s;

    // map<string, int> mp;
    // for (int i = 0; i < (int)s.size() - 4; i++)
    // {
    //     if (s.substr(i, 5) == "heavy")
    //     {
    //         mp[s.substr(i, 5)]++;
    //     }
    //     if (s.substr(i, 5) == "metal")
    //     {
    //         mp[s.substr(i, 5)]++;
    //     }
    // }

    // cout << (mp["heavy"] + mp["metal"]) - 1 << endl;

    int h = 0, ans = 0;

    for (int i = 0; i + 4 < (int)s.size(); i++)
    {
        string cur = s.substr(i, 5);

        if (cur == "heavy")
            h++;

        if (cur == "metal")
            ans += h;
    }

    cout << ans << '\n';
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
