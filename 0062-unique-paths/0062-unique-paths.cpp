class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m == 1 && n == 1) return 1;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0) continue;
                int right = 0, down = 0;
                if(j > 0) right = dp[i][j-1];
                if(i > 0) down = dp[i-1][j];
                dp[i][j] = right+down;
            }
        }
        return dp[m-1][n-1];
    }
};

// int f(int m , int n, vector<vector<int>>& dp){
//         if(m < 0 || n < 0){
//             return 0;
//         }
//         if(m == 0 && n == 0){
//             return 1;
//         }
//         if(dp[m][n] != -1) return dp[m][n];
//         int up = f(m-1, n, dp);
//         int left = f(m, n-1, dp);
//         return dp[m][n] = up+left;
//     }