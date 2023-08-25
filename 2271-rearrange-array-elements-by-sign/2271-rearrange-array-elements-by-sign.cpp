class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int i = 0,j = 1;
        for(int k=0;k<n;k++)
        {
            if(i<n && nums[k]>0)
            {
                ans[i]=nums[k];
                i+=2;
            }
            else if(j<n && nums[k]<0)
            {
                ans[j]=nums[k];
                j+=2;
            }
        }
        return ans;

    }
};