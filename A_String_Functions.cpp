#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    string s;
    cin >> s;

    while (Q--)
    {
        string op;
        cin >> op;

        if (op == "pop_back")
        {
            s.pop_back();
        }
        else if (op == "front")
        {
            cout << s.front() << "\n";
        }
        else if (op == "back")
        {
            cout << s.back() << "\n";
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
            cout << s[pos - 1] << "\n";
        }
        else if (op == "substr")
        {
            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << "\n";
        }
        else if (op == "push_back")
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
    }

    return 0;
}
