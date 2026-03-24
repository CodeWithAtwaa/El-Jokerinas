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

void MergeSortedArray(vi &arr1, vi &arr2, int n1, int n2)
{
    int nSize = n1 + n2;
    vi arr3(nSize);

    int indexa = 0, indexb = 0, indexc = 0;

    while (indexa < n1 && indexb < n2)
    {
        if (arr1[indexa] < arr2[indexb])
        {
            arr3[indexc] = arr1[indexa];
            indexa++;
        }
        else
        {
            arr3[indexc] = arr2[indexb];
            indexb++;
        }
        indexc++;
    }

    while (indexa < n1)
    {
        arr3[indexc] = arr1[indexa];
        indexa++;
        indexc++;
    }

    while (indexb < n2)
    {
        arr3[indexc] = arr2[indexb];
        indexb++;
        indexc++;
    }

    cout << arr3;
}

void Sokan_El_Leil()
{
    int n1, n2;
    cin >> n1 >> n2;
    vi arr1(n1), arr2(n2);
    cin >> arr1;
    cin >> arr2;

    MergeSortedArray(arr1, arr2, n1, n2);
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
