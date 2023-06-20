class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int r = k + k + 1;
        int n = nums.size();
        long long sum = 0;
        vector<int> ans(n, -1);
        if(k == 0) return nums;
        while(j < n){
            sum += nums[j];
            if(j-i+1 < r){
                j++;
            }
            else if(j-i+1 == r){
                long avg = sum/r;
                int mid = i + (j - i)/2;
                ans[mid] = avg;
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return ans;
    }
};