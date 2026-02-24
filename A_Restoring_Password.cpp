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

/*
0100110010 0101100000 0101100010 0101100100 0101100110 0101101000 0101101010 0101101100
0 => 0100110000
1 => 0100110010
2 => 0101100000
3 => 0101100010
4 => 0101100100
5 => 0101100110
6 => 0101101000
7 => 0101101010
8 => 0101101100
9 => 0101101110

*/
void Sokan_El_Leil()
{
    string s;
    cin >> s;

    //  str     index
    map<string, int> mp;

    for (int i = 0; i < 10; i++)
    {
        string x;
        cin >>x ;
        mp[x] = i;
    }

    for (int i = 0; i < 80; i +=10)
    {
        string x = s.substr(i, 10); // i + 10
        cout << mp[x];
    }
    cout << "\n";
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
