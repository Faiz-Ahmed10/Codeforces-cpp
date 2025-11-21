#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int main() {
    fast;
    ll n;
    int k;
    cin >> n >> k;

    while(k--) {
        if(n%10 != 0) n--;
        else n /= 10;
    }

    cout << n;    
    return 0;
}