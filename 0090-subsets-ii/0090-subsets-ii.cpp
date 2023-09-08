class Solution {
public:
    void subset(vector<int>nums, vector<vector<int>>&ans, vector<int>&v, int idx){
        ans.push_back(v);
        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i-1]) continue;
            v.push_back(nums[i]);
            subset(nums, ans, v, i+1);
            v.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>v;
        subset(nums, ans, v, 0);
        return ans;
    }
};