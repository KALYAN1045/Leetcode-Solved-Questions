class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans;
        int e1 = edges[0][0];
        int e2 = edges[0][1];
        if(e1 == edges[1][0]) ans = e1;
        else if(e1 == edges[1][1]) ans = e1;
        else if(e2 == edges[1][0]) ans = e2;
        else ans = e2;
        return ans;
    }
};