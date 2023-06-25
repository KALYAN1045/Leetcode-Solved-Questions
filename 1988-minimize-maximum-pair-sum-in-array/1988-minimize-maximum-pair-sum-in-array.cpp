class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lo = 0;
        int hi = nums.size()-1;
        int maxp = INT_MIN;
        while(lo < hi){
            int sum = nums[lo] + nums[hi];
            if(sum > maxp){
                maxp = sum;
            }
            lo++;
            hi--;
        }
        return maxp;
    }
};