#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isHard = false;
    int x;
    for(int i = 0; i < n; ++i) {
        cin >> x;
        if(x == 1) isHard = true;
    }

    if(isHard) cout << "HARD";
    else cout << "EASY";
    return 0;
}