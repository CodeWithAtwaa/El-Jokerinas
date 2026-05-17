#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> r(n), cookies(n, 1);

        for (int i = 0; i < n; i++) {
            cin >> r[i];
        }

        // Left to right
        for (int i = 1; i < n; i++) {
            if (r[i] > r[i - 1]) {
                cookies[i] = cookies[i - 1] + 1;
            }
        }

        // Right to left
        for (int i = n - 2; i >= 0; i--) {
            if (r[i] > r[i + 1]) {
                cookies[i] = max(cookies[i], cookies[i + 1] + 1);
            }
        }

        int total = 0;
        for (int x : cookies) {
            total += x;
        }

        cout << total << '\n';
    }

    return 0;
}