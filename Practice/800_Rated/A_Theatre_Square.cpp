#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long flagstone_height = (n + a - 1) / a;
    long long flagstone_weight = (m + a - 1) / a;

    cout << flagstone_height*flagstone_weight;
    return 0;
}