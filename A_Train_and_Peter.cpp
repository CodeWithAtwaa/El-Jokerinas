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

bool check(const string &s, const string &a, const string &b)
{
    auto p1 = s.find(a);
    if (p1 == string::npos)
        return false;

    auto p2 = s.find(b, p1 + a.size());
    return p2 != string::npos;
}

void Sokan_El_Leil()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    bool res = (check(s1, s2, s3));

    string temp = s1;
    reverse(all(temp));

    bool back = check(temp, s2, s3);

    if (res && back)
    {
        cout << "both\n";
    }
    else if (res)
    {
        cout << "forward\n";
    }
    else if (back)
    {
        cout << "backward\n";
    }
    else
    {
        cout << "fantasy\n";
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
