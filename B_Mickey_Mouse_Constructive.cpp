#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    
    int s = abs(x - y);
    long long ans = 0;
    
    // If sum is 0, the only valid partition is the whole array itself
    if (s == 0) {
        ans = 1;
    } else {
        // Count divisors of |x - y|
        for (int i = 1; i * i <= s; ++i) {
            if (s % i == 0) {
                ans++;
                if (i * i != s) {
                    ans++;
                }
            }
        }
    }
    
    // Output the minimum partitions modulo 676767677
    cout << (ans % 676767677) << "\n";
    
    // Construct the optimal array: all 1s, then all -1s
    for (int i = 0; i < x; ++i) cout << 1 << " ";
    for (int i = 0; i < y; ++i) cout << -1 << " ";
    cout << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}