class Solution {
public:
    bool search(vector<int>& nums, int t) {
        int l = 0;
        int n = nums.size();
        int  r = n - 1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(nums[mid] == t) return true;
            if((nums[l] == nums[mid]) && (nums[r]==nums[mid])){
                l++;
                r--;
            }
            else if(nums[l] <= nums[mid]){
                if((nums[l] <= t) && (nums[mid] > t)) r = mid - 1;
                else l = mid + 1; 
            }
            else{
                if((nums[mid] < t) && (nums[r] >= t)) l = mid + 1;
                else r = mid - 1;
            }
        }
        return false;
    }
};