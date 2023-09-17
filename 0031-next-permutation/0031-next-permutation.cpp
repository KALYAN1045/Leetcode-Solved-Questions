class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int j = n-1;
        bool break_pt = 0;
        while(j >= 1){
            if(nums[j] > nums[j-1]){
                break_pt = 1;
                break;
            }
            j--;
        }
        if(!break_pt) return reverse(nums.begin(),nums.end());
        for(int i = n-1; i > j-1; i--){
            if(nums[j-1] < nums[i]){
                swap(nums[j-1], nums[i]);
                break;
            }
        }
        reverse(nums.begin()+j,nums.end());
    }
};