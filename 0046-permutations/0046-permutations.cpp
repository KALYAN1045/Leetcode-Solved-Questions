class Solution {
public:
    void get_permute(vector<int>nums, vector<vector<int>>&ans, vector<int>&v, int idx, unordered_map<int,int>&mp){
        if(idx == nums.size()){
            ans.push_back(v);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(mp[i]) continue;
                mp[i]++;
                v.push_back(nums[i]);
                get_permute(nums, ans, v, idx+1, mp);
                mp.erase(i);
                v.pop_back();     
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;
        unordered_map<int,int>mp;
        get_permute(nums, ans, v, 0, mp);
        return ans; 
    }
};