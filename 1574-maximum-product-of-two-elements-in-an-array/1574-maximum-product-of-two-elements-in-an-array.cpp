class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=first)
            {
                second=first;
                first=nums[i];
            }
            if((nums[i]<first) and (nums[i]>=second)) second=nums[i];
        }
        return ((first-1)*(second-1));     
    }
};