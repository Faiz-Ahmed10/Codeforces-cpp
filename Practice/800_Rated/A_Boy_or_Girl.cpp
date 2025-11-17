#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;
    unordered_set<char> st(s.begin(), s.end());
    
    string result = (st.size()%2==0) ? "CHAT WITH HER!" : "IGNORE HIM!";
    cout << result;

    return 0;
}