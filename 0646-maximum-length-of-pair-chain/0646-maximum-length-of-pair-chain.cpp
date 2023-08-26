class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1] < b[1];
        });
        int cnt = 0;
        int cur = INT_MIN;
        for(int i = 0; i < p.size(); i++){
            if(cur < p[i][0]){
                cur = p[i][1];
                cnt++;
            }
        }
        return cnt;
    }
};