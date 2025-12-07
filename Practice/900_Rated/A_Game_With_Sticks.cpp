#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    bool Akshat = false;

    while(n > 0 && m > 0) {
        n--;
        m--;
        Akshat = !Akshat;
    }

    if(Akshat) cout << "Akshat"; 
    else cout << "Malvika";
    return 0;
}