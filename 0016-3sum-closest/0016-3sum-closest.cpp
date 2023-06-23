class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if(n == 3) return nums[0]+nums[1]+nums[2];
        int diff = INT_MAX;
        int ans;
        for(int i = 0; i < n; i++){
            int lo = i+1;
            int hi = n-1;
            while(lo < hi){
                int sum = nums[i] + nums[lo] + nums[hi];
                if(abs(sum - t) < diff){
                    diff = abs(sum - t);
                    ans = sum;
                }
                if(sum <= t) lo++;
                else hi--;
            }
        }
        return ans;
    }
};