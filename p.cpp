#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <ctime>
#include <queue>
#include <iomanip>
#include "assert.h"
#include <math.h>
#include <set>
#include <deque>
 
using namespace std;
 
 
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define ll long long
#define pll pair<ll, ll>
 
const ll INF = 2e18;
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int cmx = 0;
 
    int mx = 0;
 
    for (int i = 0; i < n; i++) {
        mx = max(mx, a[i]);
        if (a[i] == mx) cmx++;
    }
 
    int res = n - cmx;
    cout << res << "\n";
}
 
 
int main() {
    srand(time(0));
    ios::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
}
