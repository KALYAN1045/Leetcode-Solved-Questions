class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int sum = 0;
        int minw = INT_MAX;
        while(j < n){
            sum += nums[j];
            if(sum == t){
                minw = min(minw, j-i+1);
            }
            else if(sum > t){
                while(sum - nums[i] >= t){
                    sum -= nums[i];
                    i++;
                }
                minw = min(minw, j - i + 1);
            }
            j++;
        }
        return (minw != INT_MAX) ? minw : 0;
    }
};
