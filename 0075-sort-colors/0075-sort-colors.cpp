class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for(int  i = 0; i < nums.size(); i++){
            if(nums[i] == 0) zero++;
            else if(nums[i] == 1) one++;
            else two++;
        }
        int i = 0;
        while(i < nums.size()){
            while(zero--){
                nums[i++] = 0;
            }
            while(one--){
                nums[i++] = 1;
            }
            while(two--){
                nums[i++] = 2;
            }
        }
    }
};