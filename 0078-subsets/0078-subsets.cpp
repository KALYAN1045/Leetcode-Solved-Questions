class Solution {
    void solve(vector<vector<int>>&ans, int i, vector<int>v, vector<int>nums){
        if( i >= nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        solve(ans, i+1, v, nums);
        v.pop_back();
        solve(ans, i+1, v, nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        solve(ans, 0, v, nums);
        return ans;
    }
};