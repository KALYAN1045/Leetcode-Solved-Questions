class Solution {
public:
    bool check(vector<int>& nums) {
        bool flag = 0;
        int i;
        for(i = 1; i< nums.size(); i++){
            if(nums[i] < nums[i-1]){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return 1;
        for(int j = i; j < nums.size()-1; j++){
            if(nums[j] > nums[j+1]) return 0;
        }
        if(flag = 1 && nums[0] >= nums[nums.size()-1]) return 1;
        return 0;
    }
};