class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int r = n - 1;
        if(nums[r] > nums[l]) return nums[0];
        while(l <= r){
            int mid = l + (r - l)/2;
            int next = (mid + 1)%n;
            int prev = (mid - 1 + n)%n;
            if(nums[mid] <= nums[next] && nums[mid] <= nums[prev]) return nums[mid];
            if(nums[0] <= nums[mid]) l = mid + 1;
            if(nums[r] >= nums[mid]) r = mid - 1;
        }
        return -1;
    }
};