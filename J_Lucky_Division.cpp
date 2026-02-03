#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ios ios::sync_with_stdio(false); cin.tie(nullptr);

vector<int> lucky;

void generate_lucky(int n)
{
    if (n > 1000) return;
    if (n > 0) lucky.push_back(n);

    generate_lucky(n * 10 + 4);
    generate_lucky(n * 10 + 7);
}

void Sokan_El_Leil()
{
    int n;
    cin >> n;

    for (auto ch : lucky)
    {
        if (n % ch == 0)
        {
            yes;
            return;
        }
    }
    no;
}

int32_t main()
{
    ios;

    // Generate lucky numbers once
    generate_lucky(0);

    int t = 1;
    while (t--)
    {
        Sokan_El_Leil();
    }
}
