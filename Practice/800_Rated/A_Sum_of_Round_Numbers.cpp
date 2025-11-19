#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

// void solve() {
//     string n;
//     cin >> n;

//     int mul = 1;
//     for(size_t i = 1; i < n.length(); ++i) mul *= 10;

//     vector<int> result;
//     for(int i = 0; i < n.length(); ++i) {
//         if(n[i] != '0') result.push_back((n[i]-'0')*mul);
//         mul/=10;
//     }

//     cout << result.size() << "\n";
//     for(auto it : result) {
//         cout << it << " ";
//     }
//     cout << "\n";
// }

void solve() {
    int n;
    cin >> n;

    int mul = 10;
    vector<int> result;
    for(int i = 1; i <= 5; ++i) {
        if(n%mul != 0) result.push_back(n%mul);
        n -= n%mul;
        mul *= 10;
    }

    cout << result.size() << "\n";
    for(auto it : result) {
        cout << it << " ";
    }
    cout << "\n";
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}