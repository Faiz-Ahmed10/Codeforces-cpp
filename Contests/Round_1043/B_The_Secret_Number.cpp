#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<long long> x; 
    long long p = 10;
    for(int i = 1; i <= 18; ++i) {
        long long y = 1 + p;
        if(n % y == 0) x.push_back(n/y);
        p *= 10;
    }
    
    cout << x.size() << "\n";
    if(x.size()==0)return;

    reverse(x.begin(), x.end());
    for(auto& ele : x) {
        cout << ele << " ";
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