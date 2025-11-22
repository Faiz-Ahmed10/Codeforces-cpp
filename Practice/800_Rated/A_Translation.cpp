#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if(s.length() != t.length()) {
        cout << "NO";
        return 0;
    }

    int n = s.size();
    for(int i = 0, j = n-1; i < n; i++, j--) {
        if(s[i] != t[j]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}