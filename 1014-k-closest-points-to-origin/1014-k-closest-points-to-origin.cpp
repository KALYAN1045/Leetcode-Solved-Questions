class Solution {
public:
    int distance(int x, int y){
        return (abs(x)) * (abs(x)) + (abs(y)) * (abs(y));
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> maxh;
        for(int i = 0; i < points.size(); i++){
            maxh.push({distance(points[i][0], points[i][1]), {points[i][0], points[i][1]}});
            if(maxh.size() > k) maxh.pop();
        }
        vector<vector<int>> ans;
        while(maxh.size() > 0){
            int first = maxh.top().second.first;
            int second = maxh.top().second.second;
            ans.push_back({first,second});
            maxh.pop();
        }      
        return ans;
    }
};