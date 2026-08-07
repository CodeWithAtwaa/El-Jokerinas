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

    vi a(n+1 , 0);
    vi l(n+1 , 0);
    vi ii(n+1 , 0);

    for(int i = 0 ; i< n ;i++) {
        a[i+1] = a[i] + (s[i] == 'a');
        l[i+1] = l[i] + (s[i] == 'l');
        ii[i+1] = ii[i] + (s[i] == 'i');
    }

    int x;
    cin >> x;
    while (x--)
    {
        int e, r;
        cin >> e >> r;

        int cnta = a[r] - a[e-1];
        int cntl = l[r] - l[e-1];   
        int cnti = ii[r] - ii[e-1]; 
        
        cout << (min({cnta , cntl , cnti}) >= 1 ? "Yes\n" : "No\n") ;
    

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
