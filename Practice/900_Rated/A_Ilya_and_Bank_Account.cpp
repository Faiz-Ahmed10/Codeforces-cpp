#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    if(n[0] == '-') {
        int len = n.length();
        if(n[len-1] > n[len-2]) n.erase(len-1, 1); 
        else n.erase(len-2, 1);
    }
    if(n == "-0") n = "0";
    cout << n;
    return 0;
}