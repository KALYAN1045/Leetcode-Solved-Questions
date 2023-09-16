class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<double, vector<int>>> maxh;
        for(int i = 0; i < p.size(); i++){
            double dist = sqrt((p[i][0])*(p[i][0]) + (p[i][1])*(p[i][1]));
            maxh.push({dist, {p[i][0], p[i][1]}}); 
        }
        while(maxh.size() > k) maxh.pop();
        while(maxh.size()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        } 
        return ans;
    }
};