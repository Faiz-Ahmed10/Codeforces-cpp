#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int x = 0;
    while(n--) {
        string statement;
        cin >> statement;
        if(statement == "X++" || statement == "++X")
            x++;
        else    
            x--;
    }
    cout << x;
}

int main() {
    solve();
    return 0;
}