#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;

    int result;
    if(k <= (n+1)/2) {
        cout << 2 * k - 1;
    } else {
        ll even_pos = k - (n+1)/2;
        cout << 2 * even_pos;
    }
    return 0;
}