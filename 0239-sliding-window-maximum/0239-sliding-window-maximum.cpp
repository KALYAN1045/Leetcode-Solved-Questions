class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        vector<int> ans;
        deque<int> q;
        while(j < n){
            while(!q.empty() && q.back()<nums[j]){
                q.pop_back();
            }
            q.push_back(nums[j]);
            if(j-i+1 == k){
                ans.push_back(q.front());
                if(q.front() == nums[i]){
                    q.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
