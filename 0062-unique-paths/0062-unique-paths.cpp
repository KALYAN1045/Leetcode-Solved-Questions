class Solution {
public:
    int f(int m , int n, vector<vector<int>>& dp){
        if(m < 0 || n < 0){
            return 0;
        }
        if(m == 0 && n == 0){
            return 1;
        }
        if(dp[m][n] != -1) return dp[m][n];
        int up = f(m-1, n, dp);
        int left = f(m, n-1, dp);
        return dp[m][n] = up+left;
    }

    int uniquePaths(int m, int n) {
        if(m == 1 && n == 1){
            return 1;
        }
        vector<vector<int>> dp(m, vector<int>(n, -1));
        int ways = f(m-1, n-1, dp);
        return dp[m-1][n-1];
    }
};