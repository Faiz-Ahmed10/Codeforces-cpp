#include<bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--) {
    //     int n, m;
    //     cin >> n >> m;

    //     vector<vector<int>>matrix(n, vector<int>(m));

    //     for(int i = 0; i < n; i++) {
    //         for(int j = 0; j < m; j++) {
    //             cin >> matrix[i][j];
    //         }
    //     }

    //     int row_sum = 0, r, col_sum = 0, c;
        
    //     for(int i = 0; i < n; i++) {
    //         int sum = 0;
    //         for(int j = 0; j < m; j++) {
    //             sum += matrix[i][j];
    //         }
    //         if(sum > row_sum) {
    //             row_sum = sum;
    //             r = i;
    //         }
    //     }

    //     for(int i = 0; i < m; i++) {
    //         int sum = 0;
    //         for(int j = 0; j < n; j++) {
    //             sum += matrix[j][i];
    //         }
    //         if(sum > col_sum) {
    //             col_sum = sum;
    //             c = i;
    //         }
    //     }

    //     for(int i = 0; i < m; i++)
    //         matrix[r][i]--;
        
    //     for(int i = 0; i < n; i++) 
    //         matrix[i][c]--;
        
    //     matrix[r][c]++;

    //     int ans = INT_MIN; 
    //     for(auto row : matrix) 
    //         ans = max(ans, *max_element(row.begin(), row.end()));
        
    //     cout << ans << "\n";
    // }

    return 0;
}