class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int l, r;
        //getting indices of 1 and n
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 1){
                l = i;
                break;
            } 
        }
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == nums.size()){
                r = i;
                break;
            } 
        }
        if(l <= r){
            return (l - 0) + ((nums.size() - 1) - r);
        }
        return (l - 0) + ((nums.size() - 1) - r - 1);
    }
};