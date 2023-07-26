class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int cnt = 0;
        long product = 1;
        while(j < n){
            product *= nums[j];
            while(product >= k && i < n){
                product /= nums[i];
                i++;
            }       
            if(product < k){
                cnt += j-i+1;
            }   
            j++;  
        }
        return cnt;
    }
};