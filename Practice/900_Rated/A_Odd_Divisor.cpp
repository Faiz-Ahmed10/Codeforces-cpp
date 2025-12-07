#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    ll n;
    cin >> n;

    if((n & (n-1)) == 0) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}