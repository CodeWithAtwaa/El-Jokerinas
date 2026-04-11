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

const int MAX = 200'007;
const int MOD = 1'000'000'007;
inline void Sokan_El_Leil()
{
    string s;
    cin >> s;
    int n = s.length(), cnt = 0;
    bool all = (s[0] == 'B' || s[n - 1] == 'B');
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == 'B')
        {
            all = true;
        }
    }
    vector<int> lens;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            curr++;
        }
        else
        {
            if (curr != 0)
            {
                lens.push_back(curr);
            }
            curr = 0;
        }
    }
    if (curr != 0)
    {
        lens.push_back(curr);
    }
    sort(lens.begin(), lens.end());

    if (lens.empty())
    {
        cout << 0 << '\n';
        return;
    }

    int tot = 0;
    if (all)
    {
        tot += lens[0];
    }
    for (int i = 1; i < lens.size(); i++)
    {
        tot += lens[i];
    }
    cout << tot << '\n';
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