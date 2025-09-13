#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long even = 0;
    vector<int> odd;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x % 2 == 0) even += x;
        else odd.push_back(x);       
    }
    if(odd.size() == 0) {
        cout << 0 <<'\n';
        return;
    }
    if(odd.size()==1) {
        cout << even+odd[0] << '\n';
        return;
    }

    long long ans = even;

    sort(odd.begin(), odd.end());
    int s = odd.size();
    for(int i = s-1; i >= s/2; i--) {
        ans += odd[i];
    }

    cout << ans << '\n';
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