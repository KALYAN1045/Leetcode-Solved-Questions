class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxh(piles.begin(), piles.end());
        int sum = 0;
        while(k--){
            int top = maxh.top();
            maxh.pop();
            top -= top/2;
            maxh.push(top);
        }
        while(maxh.size() > 0){
            sum += maxh.top();
            maxh.pop();
        }
        return sum;
    }
};