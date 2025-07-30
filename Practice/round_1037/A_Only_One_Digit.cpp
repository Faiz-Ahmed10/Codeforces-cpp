#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    int y = 1001;

    while(x != 0) {
        int digit = x%10;
        y = min(y, digit);

        x /= 10;
    }

    cout << y << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}