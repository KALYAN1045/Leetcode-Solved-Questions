class Solution {
public:
    void combo_sum(vector<int>c, int idx, vector<vector<int>>&ans, vector<int>&v, int&sum, int t){
        if(idx == c.size()){
            if(sum == t){
                ans.push_back(v);
            }
            return;
        }
        if(sum + c[idx] <= t){
            sum += c[idx];
            v.push_back(c[idx]);
            combo_sum(c, idx, ans, v, sum, t);
            sum -= c[idx];
            v.pop_back();
        }
        combo_sum(c, idx+1, ans, v, sum, t);        
    }

    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int sum = 0;
        combo_sum(c, 0, ans, v, sum, target);
        return ans;
    }
};

