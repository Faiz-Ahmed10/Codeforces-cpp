#include<bits/stdc++.h>
using namespace std;

void solve(string s) {
    vector<int> freq(4);

    for(char c : s) {
        if(c != '+') freq[c-'0']++;
    }

    string res = "";
    bool first = true;
    
    for(int i = 1; i <= 3; i++) {
        while(freq[i]--) {
            if(!first) res += '+';
            res += to_string(i);
            first = false;
        }
    }

    cout << res;
}

int main() {
    string s;
    cin >> s;
    solve(s);
    return 0;
}