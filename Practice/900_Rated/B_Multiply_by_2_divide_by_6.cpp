#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    int n;
    cin >> n;

    int moves = 0;
    while(n > 1) {
        if(n % 6 == 0) {
            n /= 6;
            moves++;
        } else if(n % 3 == 0) {
            n *= 2;
            moves++;
        } else {
            cout << -1 << '\n';
            return;
        }
    }

    cout << moves << '\n';
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}