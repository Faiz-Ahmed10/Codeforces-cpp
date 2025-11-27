#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for(int i = 1; i <= t; ++i) 
        for(int i = 1; i < n; )
            if(s[i-1] == 'B' && s[i] == 'G') {swap(s[i-1], s[i]); i+=2;}
            else i++;
    

    cout << s;
    return 0;
}