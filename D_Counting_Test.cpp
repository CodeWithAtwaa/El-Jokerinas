/*
___________________________________________________________________________________________________
                             بِسْمِ اللَّـهِ الرَّحْمَـ ٰنِ الرَّحِيمِ
___________________________________________________________________________________________________
                                     Author Atwaa
___________________________________________________________________________________________________

Time : O( n + m )
Space : O( n )
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
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;
    s = " " + s;

    int freq[n + 5][26];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            freq[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        freq[i][s[i] - 'a'] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            freq[i][j] += freq[i - 1][j];
        }
    }

    while (m--)
    {
        long long l, r;
        char ch;
        cin >> l >> r >> ch;

        int id = ch - 'a';

        auto get = [&](long long x)
        {
            long long full = x / n;
            long long rem = x % n;
            return full * freq[n][id] + freq[rem][id];
        };

        cout << get(r) - get(l - 1) << "\n";
    }
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
