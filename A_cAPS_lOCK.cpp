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
    string s;
    cin >> s;

    int cnt = 0;

    bool cheeck = false; // uppercase
    // 1st condition
    if (islower(s[0]))
    {
        cheeck = true;
    }
    for (int i = 0; i < s.size(); i++)
    {
        // 2nd condition
        if (isupper(s[i]))
            cnt++;
    }

    if ( (cheeck && cnt == (int)s.size() - 1))
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << "\n";
    }else if(cnt == (int)s.size()) {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << "\n";
    }
    else
    {
        cout << s << "\n";
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
