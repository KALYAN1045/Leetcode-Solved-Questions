class Solution {
public:
    void combo_sum(vector<int>&c, vector<vector<int>>&ans, vector<int>&v, int idx, int t){
        if(t == 0) {
            ans.push_back(v);
            return;
        }
        for(int i = idx; i < c.size(); i++){
           if(i > idx && c[i] == c[i-1]) continue;
           if(c[i] > t) break;
           v.push_back(c[i]);
           combo_sum(c, ans, v, i+1, t-c[i]);
           v.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        vector<vector<int>>ans;
        vector<int>v;
        combo_sum(c, ans, v, 0, t);
        return ans;
    }
};