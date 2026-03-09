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
    int n;
    cin >> n;

    int c1=0,c2=0,c3=0,c4=0;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        if(x==1) c1++;
        else if(x==2) c2++;
        else if(x==3) c3++;
        else c4++;
    }

    int taxis=0;

    taxis += c4;

    taxis += c3;
    c1 = max(0, c1 - c3);

    taxis += c2/2;

    if(c2%2)
    {
        taxis++;
        c1 = max(0, c1-2);
    }

    taxis += (c1+3)/4;

    cout<<taxis;
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
