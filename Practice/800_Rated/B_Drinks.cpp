#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> volume(n); 
    int total = 0;
    for(int i = 0; i < n; ++i) {cin >> volume[i]; total += volume[i];}

    cout << fixed << setprecision(12) << (double)total/n;
    
    return 0;
}