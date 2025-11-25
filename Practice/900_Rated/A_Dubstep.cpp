#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string song;
    for(int i = 0; i < s.length();) {
        if(i+2 < s.length() && s.substr(i, 3) == "WUB") {
            song += " ";
            i += 3;
        } else {
            song += s[i];
            i++;
        }
    }

    stringstream ss(song);
    string result, w;
    
    ss >> result;
    while(ss >> w) {
        result += " " + w;
    }
    cout << result;

    return 0;
}