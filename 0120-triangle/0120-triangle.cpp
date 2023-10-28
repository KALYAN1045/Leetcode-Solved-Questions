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
        vector<int> dp (t[n-1].begin(), t[n-1].end());
        for(int i = n-2; i >= 0; i--){
            vector<int> cur(n);
            for(int j = i; j >= 0; j--){
                int down = t[i][j] + dp[j];
                int diag = t[i][j] + dp[j+1];
                cur[j] = min(down, diag);
            }
            dp = cur;
        }
        return dp[0];
    }
};