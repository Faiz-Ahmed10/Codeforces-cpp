#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x, y;

    cin >> n >> m >> x >> y;

    vector<int> l1(n);
    for(int i = 0; i < n; i++) cin >> l1[i];
    vector<int> l2(m);
    for(int i = 0; i < m; i++) cin >> l2[i];

    cout << n+m << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}