#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> ht(26, 0);
        for(int i = 0; i < n; i++) {
            ht[s[i]-'a']++;
        }
        
        int flag = 0;
        for(int i = 0; i < 26; i++) {
            if(ht[i] >= 3) {
                flag = 1;
                break;
            }
            else if(ht[i] == 2 && (s[0]-'a' != i || s.back()-'a' != i)){
                flag = 1;
                break;
            }
        }

        if(flag)
            cout << "Yes" << "\n";
        else   
            cout << "No" << "\n";
    }

    return 0;
}