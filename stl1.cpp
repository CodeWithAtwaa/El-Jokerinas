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

#define str   \
    string s; \
    cin >> s;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ull unsigned long long
#define ll long long
#define int ll
#define vi vector<ll>
#define vvi vector<vi>
#define pri pair<int, int>
#define prl pair<ll, ll>

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

struct par
{
    int x, y;
};

void Sokan_El_Leil()
{
    // int n;
    // cin >> n;
    // vector<pair<int, int>> arr(n), arr1(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i].first >> arr[i].second;
    // }

    // sort(all(arr), [&](par &a, par &b) // return true or false
    //      {
    //     if (a.x == b.x)
    //     return a.y < b.y;
    // return a.x < b.x; });

    // sort(all(arr));

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].first << " " << arr[i].second << "\n";
    // }

    // pair<int, int> p = {10, 20};
    // cout << p.first << " " << p.second << "\n";
    // p = make_pair(30, 20);
    // cout << p.first << " " << p.second << "\n";
    // p = {30, 50};
    // cout << p.first << " " << p.second << "\n";

    // pair<int, pair<int, int>> point = {10 , {30,40}};
    // cout << point.first << " " << point.second.first << " " << point.second.second << "\n";
    // point.first = 20;
    // point.second = {50,60};
    // cout << point.first << " " << point.second.first << " " << point.second.second << "\n";

    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }

    arr.push_back(20); // insert in last array
    arr.emplace_back(100); // insrt in last array
    arr.emplace(arr.begin() + 1, 100); // insert from any where, fast
    arr.insert(arr.begin() + 5 , 10); // insert from any where

    arr.pop_back(); // delete first element
    arr.erase(arr.begin() + 1); // delete from any where 
    arr.erase(arr.begin() + 1, arr.begin() + 3);
    arr.clear(); // delete all elements

    arr.assign(100, 0); // add init value
    arr.back(); // print last element
    arr.front(); // print first element
    arr.capacity(); // the size
    arr.size(); // the size 
    arr.max_size(); // the max size 
    arr.empty(); // check if empty

    arr.reserve(arr.size()); // to reverse
    arr.begin() ; // iterator 
    arr.end() - 1; // iterator
    arr.at(5); // to access from any where

    

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
