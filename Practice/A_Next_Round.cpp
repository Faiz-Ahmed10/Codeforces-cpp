#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> score(n);
    int res = 0;
    for(int i = 0; i < n; i++) {
        cin >> score[i];

        if(score[i] > 0 && score[k-1]<=score[i])
            res++;
    }
    cout << res;
}

int main() {
    solve();
    return 0;
}