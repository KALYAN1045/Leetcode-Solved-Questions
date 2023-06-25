class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        int i = (n/2) - 1;
        int j = n-1;
        while(i >=0 && j >=0){
            if(nums[i]*2 <= nums[j]){
                ans++;
                j--;
            }
            i--;
        }
        return ans*2;
    }
};