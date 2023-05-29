class Solution {
public:
    int search(vector<int>& nums, int t) {
        int l = 0;
        int r = nums.size() - 1;
        int n = nums.size();
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] == t) return mid;

            if(nums[0] <= nums[mid]){
                if(nums[l]<=t && nums[mid] >=t) r=mid-1;
                else l = mid + 1;
            }
            else{
                if(nums[mid]<=t && nums[r] >= t) l = mid + 1;
                else r = mid - 1;
            }
            
        }
        return -1;
    }
};