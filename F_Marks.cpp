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

void Sokan_El_Leil()
{

    int n, m;
    cin >> n >> m;

    int arr[n][m];
    int cnt = 0;
    int cntR = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            arr[i][j] = (c - '0');
        }
    }

    vector<bool> res(n, 0);
    for (int j = 0; j < m; j++)
    {
        int mx = -1;
        //  row = i col = j
        for (int i = 0; i < n; i++)
        {
            mx = max(arr[i][j] , mx);
        }

        //  row = k col = j

        // 1 1 2 1
        // cntR = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[k][j] == mx)
            {
                res[k] = 1;
                // cntR++;
            }
            // 3 => 2
            // if(cntR >1 && cntR % 2 == 0 ) {
            //     res[k] = 0;
            // }
        }
    }

    /*
    2553
    6856
    5133
    */

    // 6 8 5

    for (int i = 0; i < n; i++)
    {
        if (res[i] )
        {
            cnt++;
        }
    }

    cout << cnt << "\n";
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
