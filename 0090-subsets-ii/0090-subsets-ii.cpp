class Solution {
public:
    void subset(vector<int>nums, set<vector<int>>&ans, vector<int>&v, int idx){
        if(idx == nums.size()){
            vector<int> temp = v;
            sort(temp.begin(),temp.end());
            ans.insert(temp);
            return;
        }
        v.push_back(nums[idx]);
        subset(nums, ans, v, idx+1);
        v.pop_back();
        subset(nums, ans, v, idx+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>v;
        subset(nums, ans, v, 0);
        vector<vector<int>>res;
        for(auto it:ans) res.push_back(it);
        return res;
    }
};