class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>v;
        int n= inter.size();
        sort(inter.begin(),inter.end());
        for(int i = 0; i < n; i++){
            int l = inter[i][0];
            int r = inter[i][1];
            if(!v.empty() && v[v.size()-1][1] >= r){
                continue;
            }
            for(int j = i+1; j < n; j++){
                if(inter[j][0] <= r){
                    r = max(r, inter[j][1]);
                }
                else break;
            }
            v.push_back({l,r});
        }
        return v;
    }
};