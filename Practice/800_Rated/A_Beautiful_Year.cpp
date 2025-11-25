#include <bits/stdc++.h>
using namespace std;

bool digitsEqual(int n) {
    unordered_set<int> st;
    while(n > 0) {
        int digit = n % 10;
        if(st.find(digit) != st.end()) return true;
        st.insert(digit);
        n /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    n++;
    while(digitsEqual(n)) {
        n++;
    }
    cout << n;
    return 0;
}