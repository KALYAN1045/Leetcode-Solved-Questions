class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int n = nums.size();
        while(l < r){
            int mid = l + (r - l)/2;
            if(mid == 0) return nums[0] >= nums[1] ? 0 : 1;
            if(mid == r) return nums[r-1] >= nums[r-2] ? nums[r-1] : nums[r-2];
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) return mid;
            if(nums[mid] < nums[mid-1]) r = mid - 1;
            else l = mid + 1;
        }
        return l;
    }
};