class Solution {
public:
    void combo_sum(vector<int>c, int idx, vector<vector<int>>&ans, vector<int>&v, int t){
        if(idx == c.size()){
            if(t == 0){
                ans.push_back(v);
            }
            return;
        }
        if(c[idx] <= t){
            v.push_back(c[idx]);
            combo_sum(c, idx, ans, v, t-c[idx]);
            v.pop_back();
        }
        combo_sum(c, idx+1, ans, v, t);        
    }

    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        combo_sum(c, 0, ans, v,target);
        return ans;
    }
};