#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; ++i) cin >> a[i];

    int result = 1;
    int cnt = 1;

    for(int i = 1; i < n; ++i) {
        if(a[i-1] <= a[i]) {
            cnt++; 
            result = max(result, cnt);
        }
        else cnt = 1;
    }

    cout << result;
    return 0;
}