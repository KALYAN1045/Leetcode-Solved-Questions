class Solution {
public:
    void comb_sum(vector<int>&c, vector<vector<int>>&ans, vector<int>& v, int idx, int t){
        if(t == 0){
            ans.push_back(v);
            return;
        }
        if(idx >= c.size()) return;
        comb_sum(c, ans, v, idx+1, t);
        if(t-c[idx] >= 0){
            v.push_back(c[idx]);
            comb_sum(c, ans, v, idx, t-c[idx]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
        sort(c.begin(),c.end());
        vector<int>v;
        comb_sum(c, ans, v, 0, t);
        return ans;
    }
};