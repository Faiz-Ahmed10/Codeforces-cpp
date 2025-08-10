#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            cout << -1;
            continue;
        }
        if(i == n && n%2 == 0) {
            cout << " " << 2;
            break;
        }
        if(i % 2 != 0) {
            cout << " " << -1;
        } else {
            cout << " " << 3;
        }
    }
    cout << "\n";
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