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

void Sokan_El_Leil()
{
    float a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "Origem\n";
    }
    else if ((a == 0 && b > 0) || (a == 0 && b < 0))
    {
        cout << "Eixo Y\n";
    }
    else if ((a > 0 && b == 0) || (a < 0 && b == 0))
    {
        cout << "Eixo X\n";
    }
    else if (a > 0 && b > 0)
    {
        cout << "Q1\n";
    }
    else if (a < 0 && b > 0)
    {
        cout << "Q2\n";
    }
    else if (a < 0 && b < 0)
    {
        cout << "Q3\n";
    }
    else
    {
        cout << "Q4\n";
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
