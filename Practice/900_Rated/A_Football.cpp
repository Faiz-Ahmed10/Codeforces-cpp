#include <bits/stdc++.h>
using namespace std;

int main() {
    string players;
    cin >> players;

    int cnt = 1;
    for(int i = 1; i < players.length(); ++i) {
        if(players[i] == players[i-1]) {
            cnt++;
            if(cnt >= 7) {
                cout << "YES";
                return 0;
            }
        } else cnt = 1;
    }
    cout << "NO";

    return 0;
}