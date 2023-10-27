class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        if(m == 1 && n == 1) {
            if(g[0][0] == 1) return 0;
            return 1;
        }
        if(g[0][0] == 1 || g[m-1][n-1] == 1) return 0;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        dp[0][0] = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0) continue;
                if(g[i][j] == 1){
                    dp[i][j] = 0;
                    continue;
                }
                int up = 0, left = 0;
                if(i > 0) up = dp[i-1][j];
                if(j > 0) left = dp[i][j-1];
                dp[i][j] = up+left;
            }
        }
        return dp[m-1][n-1];
    }
};