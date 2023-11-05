class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int tot_sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) tot_sum += nums[i];
        int k = 0;
        if (tot_sum % 2 == 1) return false;
        else k = tot_sum / 2;
        vector<vector<bool>>dp (n, vector<bool>(k+1, 0));
        for(int i = 0; i < n; i++){
            dp[i][0] = 1;
        }
        if (nums[0] <= k) dp[0][nums[0]] = 1;
        for(int i = 1; i < n; i++){
            for(int j = 1; j <= k; j++){
                bool not_pick = dp[i-1][j];
                bool pick = 0;
                if(j >= nums[i]){
                    pick = dp[i-1][j-nums[i]];
                }
                dp[i][j] = pick | not_pick;
            }
        }
        return dp[n-1][k];
    }
};