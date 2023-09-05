class Solution {
public:
    vector<int>generateRows(int n){
        int ans = 1;
        vector<int>v;
        v.push_back(1);
        for(int i = 1; i < n; i++){
            ans *= (n - i);
            ans /= i;
            v.push_back(ans);
        }
        return v;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i = 1; i <= n; i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};