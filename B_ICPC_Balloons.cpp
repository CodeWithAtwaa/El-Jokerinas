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
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Sol By Array
    // int cnt = 0;
    // string temp = "";
    // for (auto &it : s)
    // {
    //     char x = it;
    //     if (temp.find(x) != string::npos)
    //     {
    //         cnt += 1;
    //         // cout << x << "=>" << cnt << "\n";
    //     }
    //     else
    //     {
    //         cnt += 2;
    //         // cout << x << " " << cnt << "\n";
    //     }
    //     temp.push_back(x);
    // }

    // cout << cnt << "\n";

    // Sol By Freq

    map<char, int> mp;
    int cnt = 0;
    for (auto &it : s)
    {
        mp[it]++;
        if (mp[it] == 1)
        {
            cnt += 2;
        }
        else
        {
            cnt += 1;
        }
    }
    cout << cnt << "\n";
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
