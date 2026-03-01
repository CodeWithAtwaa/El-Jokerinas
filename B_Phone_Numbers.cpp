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

int t;

// the number of taxi pizaa,girl
vector<pair<string, int>> taxi(t);
vector<pair<string, int>> pizaa(t);
vector<pair<string, int>> girl(t);

// max taxi
vector<string> getTaxi(vector<pair<string, int>> &taxi)
{

    int mx = INT_MIN;
    for (auto it : taxi)
    {
        if (it.second > mx)
        {
            mx = it.second;
        }
    }

    // to store maxcnt;
    vector<string> res;
    for (auto it : taxi)
    {
        if (it.second == mx)
        {
            res.push_back(it.first);
        }
    }

    return res;
}

// max pizaa
vector<string> getPizaa(vector<pair<string, int>> &pizaa)
{

    int mx = INT_MIN;
    for (auto it : pizaa)
    {
        if (it.second > mx)
        {
            mx = it.second;
        }
    }

    // to store maxcnt;
    vector<string> res;

    for (auto it : pizaa)
    {
        if (it.second == mx)
        {
            res.push_back(it.first);
        }
    }

    return res;
}

// maxgiral
vector<string> getGirl(vector<pair<string, int>> &girl)
{

    int mx = INT_MIN;
    for (auto it : girl)
    {
        if (it.second > mx)
        {
            mx = it.second;
        }
    }

    // to store maxcnt;
    vector<string> res;

    for (auto it : girl)
    {
        if (it.second == mx)
        {
            res.push_back(it.first);
        }
    }

    return res;
}

// this function to for each frinde
void Sokan_El_Leil(int i)
{
    // read frindes anf name
    int n;
    string s;
    cin >> n >> s;

    int t = 0, p = 0, g = 0;
    for (int i = 0; i < n; i++)
    {
        string phone;
        cin >> phone;

        string tmp = "";
        for (auto &ch : phone)
        {
            if (isdigit(ch))
            {
                tmp += ch;
            }
        }

        // calculate the number of taxi, pizaa,girls for each frind

        bool same = true, decreasing = true;
        for (int k = 1; k < 6; k++)
        {
            if (tmp[k] != tmp[0])
                same = false;

            if (tmp[k] >= tmp[k - 1])
                decreasing = false;
        }

        if (same)
            t++;
        else if (decreasing)
            p++;
        else
            g++;
    }

    // for taxi
    taxi[i].first = s;
    taxi[i].second = t;

    // for pizaaa
    pizaa[i].first = s;
    pizaa[i].second = p;

    // for girl
    girl[i].first = s;
    girl[i].second = g;
}

// loop for each array to claluat the max number of gira,pizaa,tax;
// if i found the any number of elemnt = max then i print them

int32_t main()
{
    ios;

    cin >> t;

    taxi.resize(t);
    pizaa.resize(t);
    girl.resize(t);

    for (int i = 0; i < t; i++)
        Sokan_El_Leil(i);

    /*
    If you want to call a taxi, you should call: Rogulenko.
If you want to order a pizza, you should call: Fedorov, Rogulenko, Kaluzhin.
If you want to go to a cafe with a wonderful girl, you should call: Melnikov.

    */

    // for  taxi
    cout << "If you want to call a taxi, you should call: ";
    vector<string> ttt = getTaxi(taxi);
    for (int i = 0; i < ttt.size(); i++)
    {
        if (i)
        {
            cout << ", ";
        }
        cout << ttt[i];
    }
    cout << ".\n";

    // for  pizaa
    cout << "If you want to order a pizza, you should call: ";
    vector<string> pi = getPizaa(pizaa);
    for (int i = 0; i < pi.size(); i++)
    {
        if (i)
        {
            cout << ", ";
        }
        cout << pi[i];
    }
    cout << ".\n";

    // for  pizaa
    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    vector<string> gi = getGirl(girl);
    for (int i = 0; i < gi.size(); i++)
    {
        if (i)
        {
            cout << ", ";
        }
        cout << gi[i];
    }
    cout << ".\n";
}
