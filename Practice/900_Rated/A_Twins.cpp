#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int total = accumulate(a.begin(), a.end(), 0);
    sort(a.begin(), a.end());

    int result = 0;
    int s = 0;
    for(int i = n-1; i >= 0; --i) {
        s += a[i];
        result++;
        if(s > total - s) break;
    }

    cout << result;
    return 0;
}