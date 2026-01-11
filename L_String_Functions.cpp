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
    int n, q;
    cin >> n >> q;
    string s; 
    cin >> s;
    while (q--)
    {
        string op;
        cin >> op;
        
        if (op == "pop_back")
        {
            s.pop_back(); 
        }
        else if (op == "front")
        {
            cout << s.front() << endl;
        }
        else if (op == "back")
        {
            cout << s.back() << endl;
        }
        else if (op == "sort")
        {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (op == "reverse")
        {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (op == "print")
        {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if (op == "substr")
        {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            cout << s.substr(l - 1, r - (l - 1)) << endl;
        }
        else if (op == "push_back")
        {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
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
