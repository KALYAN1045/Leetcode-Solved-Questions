class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>maxh;
        for(int i = 0; i < mat.size(); i++){
            int one_cnt = count(mat[i].begin(), mat[i].end(), 1);
            maxh.push({one_cnt, i});
            if(maxh.size() > k) maxh.pop();
        }
        vector<int>ans;
        while(maxh.size() > 0){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};