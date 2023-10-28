class Solution {
public:
    // int f(vector<vector<int>>& t, vector<vector<int>>& dp,int n, int i, int j){
    //     if(i == n-1) return t[i][j];
    //     if(dp[i][j] != 0) return dp[i][j];
    //     int down = t[i][j] + f(t, dp, n, i+1, j);
    //     int diag = t[i][j] + f(t, dp, n, i+1, j+1);
    //     return dp[i][j] = min(down, diag);
    // }

    int minimumTotal(vector<vector<int>>& t) {
        int n = t.size();
        int m = t[n-1].size();
        if(n == 1 && m == 1) return t[0][0];
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i = 0; i < m; i++){
            dp[n-1][i] = t[n-1][i];
        }
        for(int i = n-2; i >= 0; i--){
            for(int j = i; j >= 0; j--){
                int down = t[i][j] + dp[i+1][j];
                int diag = t[i][j] + dp[i+1][j+1];
                dp[i][j] = min(down, diag);
            }
        }
        return dp[0][0];
    }
};