class Solution {
public:
    int f(vector<vector<int>>& g, vector<vector<int>>& dp, int i, int j){
        if(i == 0 && j == 0) return g[0][0];
        if(i < 0 || j < 0) return 1e9;
        if(dp[i][j] != 0) return dp[i][j];
        int up  = g[i][j] + f(g, dp, i-1, j);
        int left = g[i][j] + f(g, dp, i, j-1);
        return dp[i][j] = min(up, left);
    }

    int minPathSum(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        if(m == 1 && n == 1){
            return g[0][0];
        }
        vector<vector<int>> dp(m, vector<int>(n, 0));
        int min = f(g, dp, m-1, n-1);
        return dp[m-1][n-1];
    }
};