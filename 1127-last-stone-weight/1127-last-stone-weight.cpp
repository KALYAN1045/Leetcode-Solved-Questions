class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int>maxh;
        for(auto i : s) maxh.push(i);
        while(maxh.size() > 1){
            int y = maxh.top();
            maxh.pop();
            int x = maxh.top();
            maxh.pop();
            int res = y - x;
            maxh.push(res);
        }
        return maxh.top();
    }
};