class Solution {
public:
    int f(vector<vector<int>>& g, vector<vector<int>>& dp, int i, int j){
        if(i == 0 && j == 0) return 1;
        if(i < 0 || j < 0) return 0;
        if(g[i][j] == 1) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int up = 0, left = 0;
        if(i > 0) up = f(g, dp, i-1, j);
        if(j > 0) left = f(g, dp, i, j-1);
        return dp[i][j] = up+left;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        if(m == 1 && n == 1) {
            if(g[0][0] == 1) return 0;
            return 1;
        }
        if(g[0][0] == 1 || g[m-1][n-1] == 1) return 0;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        int ways = f(g, dp, m-1, n-1);
        return dp[m-1][n-1];
    }
};