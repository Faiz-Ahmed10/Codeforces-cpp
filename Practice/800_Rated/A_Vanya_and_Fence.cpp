#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, h;
    cin >> n >> h;

    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int result = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] <= h) result++;
        else result += 2;
    }

    cout << result;

    return 0;
}