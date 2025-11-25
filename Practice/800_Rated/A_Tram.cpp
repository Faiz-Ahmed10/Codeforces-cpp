#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> stops;

    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        stops.push_back({x, y});
    }

    int result = 0;
    int temp = 0;
    for(int i = 0; i < n; ++i) {
        temp -= stops[i].first;
        temp += stops[i].second;
        result = max(result, temp);
    }

    cout << result;
    return 0;
}