#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    while(n--) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if(petya && vasya || petya && tonya || vasya && tonya) count++;
    }
    cout << count;
    return 0;
}