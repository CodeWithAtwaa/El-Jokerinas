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

//  make split for '/'
vector<string> split(const string &s, char d)
{
    vector<string> arr;
    stringstream ss(s);
    string temp;
    while (getline(ss, temp, d))
    {
        if (!temp.empty())
            arr.push_back(temp);
    }

    return arr;
}

inline void Sokan_El_Leil()
{
    int n;
    cin >> n;
    string s;
    stack<string> st;
    vector<string> arr;
    string path;

    while (n--)
    {
        cin >> s;

        if (s == "pwd")
        {
            cout << "/";
            for (auto &it : arr)
            {
                cout << it << "/";
            }
            cout << "\n";
        }
        else if (s == "cd")
        {
            cin >> path;

            if (path[0] == '/')
            {
                arr.clear();
            }

            vector<string> ls = split(path, '/');
            for (auto &it : ls)
            {
                if (it == "..")
                {
                    if (!arr.empty())
                    {
                        arr.pop_back();
                    }
                }else{
                    arr.push_back(it);
                }
            }
        }
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



// / /atwaa/ElJokrians/  /
// home atwaa ElJokrians

// "123456789"

// ss >> num;