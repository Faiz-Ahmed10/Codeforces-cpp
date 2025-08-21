#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    string a, b, c;
    cin >> a;
    cin >> m;
    cin >> b >> c;

    string v;
    for(int i = 0; i < m; ++i) {
        if(c[i] == 'D') {
            a.push_back(b[i]);
        }
    }
    for(int i = m-1; i >= 0; --i) {
        if(c[i] != 'D') {
            v.push_back(b[i]);
        }
    }
    cout<< v+a << "\n";
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