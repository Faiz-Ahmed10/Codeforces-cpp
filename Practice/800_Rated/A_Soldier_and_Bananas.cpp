#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, w;
    long long n;
    cin >> k >> w >> n;

    long long total = k * ((n)*(n+1)/2);
    
    if(total-w <= 0) cout << 0;
    else cout << total - w;

    return 0;
}