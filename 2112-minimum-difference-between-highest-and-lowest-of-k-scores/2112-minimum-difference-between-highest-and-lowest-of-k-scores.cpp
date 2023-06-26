class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int i = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j = k - 1;
        int mindiff = INT_MAX;
        while(j < n){
            int diff = nums[j] - nums[i];
            if(diff < mindiff){
                mindiff = diff;
            }
            i++;
            j++;
        }
        return mindiff;
    }
};