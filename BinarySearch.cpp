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

inline void Sokan_El_Leil()
{
    vi arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 50;

    //  Time complexity: O(log n)
    // int l = 0, r = arr.size() - 1, mid = 0;
    // while (l <= r)
    // {
    //     mid = l + (r - l) / 2;
    //     if(arr[mid] == target)
    //     {
    //         cout << "Found at index: " << mid << ln;
    //         return;
    //     }
    //     else if(arr[mid] < target)
    //     {
    //         l = mid + 1;
    //     }
    //     else
    //     {
    //         r = mid - 1;
    //     }
    // }

    auto  lower = lower_bound(all(arr), target);
    auto upper = upper_bound(all(arr), target);
    auto equal = equal_range(all(arr), target);
    cout << *lower << "\n";
    cout << *upper << "\n";
    cout << *equal.first << "\n";
    cout << *equal.second << "\n";
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