#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int ans;
        ans = (arr[n-1] - arr[0]) + min(abs(s-arr[0]), abs(s-arr[n-1]));

        cout << ans << "\n";
    }

    return 0;
}