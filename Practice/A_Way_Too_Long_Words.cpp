#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string word;
        cin >> word;

        int len = word.length();
        if(len > 10) {
            cout << word[0] + to_string(len-2) + word[len-1] << "\n";
        }
        else 
            cout << word << "\n";
    }

    return 0;
}