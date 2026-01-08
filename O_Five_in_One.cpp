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

ll mxx(vi &arr, int n)
{
    int mx = INT_MIN;
    rep(i, 0, n)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

ll mnn(vi &arr, int n)
{
    int mx = INT_MAX;
    rep(i, 0, n)
    {
        if (arr[i] < mx)
            mx = arr[i];
    }
    return mx;
}

bool isPrime(ll n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }

    if (n % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int numPrime(vi &arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            cnt++;
        }
    }

    return cnt;
}

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int cntPlain(vi &arr, int n)
{
    int cnt = 0;
    rep(i, 0, n)
    {
        if (reverse(arr[i]) == arr[i])
        {
            cnt++;
        }
    }
    return cnt;
}

int cntdiv(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int mxCntDiv(vi &arr, int n) {
    int maxDivisors = -1;
    ll resultValue = -1;

    rep(i, 0, n) {
        int currentDivisors = cntdiv(arr[i]);
        
        if (currentDivisors > maxDivisors) {
            maxDivisors = currentDivisors;
            resultValue = arr[i];
        } 
        else if (currentDivisors == maxDivisors) {
            if (arr[i] > resultValue) {
                resultValue = arr[i];
            }
        }
    }
    return resultValue;
}

void Sokan_El_Leil()
{
    int n;
    cin >> n;
    vi arr(n);
    cin >> arr;

    cout << "The maximum number : " << mxx(arr, n) << endl;
    cout << "The minimum number : " << mnn(arr, n) << endl;
    cout << "The number of prime numbers : " << numPrime(arr, n) << endl;
    cout << "The number of palindrome numbers : " << cntPlain(arr, n) << endl;
    cout << "The number that has the maximum number of divisors : " << mxCntDiv(arr, n) << endl;
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
