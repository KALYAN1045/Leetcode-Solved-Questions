class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>v;
        int n= inter.size();
        sort(inter.begin(),inter.end());
        v.push_back(inter[0]);
        for(int i = 1; i < n; i++){
            if(inter[i][0] <= v[v.size()-1][1]){
                v[v.size()-1][1] = max(v[v.size()-1][1], inter[i][1]);
            }
            else v.push_back({inter[i][0],inter[i][1]});
        }
        return v;
    }
};