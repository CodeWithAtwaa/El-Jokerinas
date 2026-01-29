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

struct vol
{
    ll val, index;
};
void Sokan_El_Leil()
{
    string name[4] = {"Hussien", "Atef", "Karemo", "Ezzat"};
    vector<vol> arr(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i].val;
        arr[i].index = i + 1;
    }

    sort(all(arr), [&](const vol &a, const vol &b)
         { return a.val > b.val; });

    // cout << arr[0].index << "\n";

    cout << name[(arr[0].index)-1] << " " << name[(arr[1].index)-1];
    cout << "\n";
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
