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

const int MOD = 1e6 + 5;
// sort(arr.begin(), arr.end(), [](const color &a, const color &b)
//      { return a.val < b.val; });

struct aha
{
    int indx = 0, val = 0;
};
void Sokan_El_Leil()
{
    int n;
    cin >> n;
    vector<aha> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].val;
        arr[i].val += 1;
        arr[i].indx = i + 1 ;
    }
    cout << endl;
    sort(all(arr), [](const aha &a, const aha &b)
         { return a.val < b.val; });

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].indx << " " ;
    }
}

int main()
{
    ios;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Sokan_El_Leil();
    }
}
