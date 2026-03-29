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
    int n;
    cin >> n;

    //  name   role
    vector<pair<string, string>> arr(n);
    vector<pair<string, string>> wom;
    vector<pair<string, string>> man;
    vector<pair<string, string>> rat;
    vector<pair<string, string>> captian;

    for (auto &it : arr)
    {
        cin >> it.first >> it.second;

        if (it.second == "captain")
            captian.push_back({it.first, it.second});
        if (it.second == "woman" || it.second == "child" )
            wom.push_back({it.first, it.second});
        if (it.second == "man")
            man.push_back({it.first, it.second});
        if (it.second == "rat")
            rat.push_back({it.first, it.second});
    }


    for (auto &it : rat)
    {
        cout << it.first <<"\n";
    }

    for (auto &it : wom)
    {
        cout << it.first  <<"\n";
    }

    for (auto &it : man)
    {
        cout << it.first  <<"\n";
    }

    for (auto &it : captian)
    {
        cout << it.first<<"\n";
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
