#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> deals;
    vector<long long> costs;

    long long melons = 1;
    int x = 0;
    while (melons <= n)
    {
        long long cost;
        if(x == 0) cost = 3;
        else cost = (long long)pow(3, x + 1) + ((long long)x * (long long)pow(3, x - 1));
        deals.push_back(melons);
        costs.push_back(cost);

        melons *= 3;
        x++;
    }

    int size = deals.size();
    long long ans = 0;
    for (int i = size - 1; i >= 0; --i)
    {
        while (n >= deals[i])
        {
            n -= deals[i];
            ans += costs[i];
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}