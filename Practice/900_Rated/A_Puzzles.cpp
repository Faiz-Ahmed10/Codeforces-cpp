#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> puzzles(m);
    for(int i = 0; i < m; ++i) cin >> puzzles[i];

    sort(puzzles.begin(), puzzles.end());

    int result = INT_MAX;
    for(int i = 0; i + n - 1 < m; ++i) {
        result = min(result, puzzles[i + n - 1]-puzzles[i]);
    }


    cout << result;
    return 0;
}