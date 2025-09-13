// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<pair<int, int>> arr;

//     int ans = m;
//     for(int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;
//         arr.push_back({a, b});
//         if(a == m) ans = m-1;
//     }

//     for(int i = 0; i < arr.size(); i++) {
//         if(arr[i].first != m && arr[i].first % 2 != arr[i].second) ans--;
//     }

//     cout << ans << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--) {
//         solve();
//     }

//     return 0;
// }