class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxh;
        for(int i = 0; i < nums.size(); i++){
            maxh.push(nums[i]);
        }
        while(k>=2) {
            maxh.pop();
            k--;
        }
        return maxh.top();
    }
};