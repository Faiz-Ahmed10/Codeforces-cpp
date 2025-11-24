#include <bits/stdc++.h>
using namespace std;

int main() {
    string program;
    cin >> program;

    for(int i = 0; i < program.length(); ++i) {
        if(program[i] == 'H' || program[i] == 'Q' || program[i] == '9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}