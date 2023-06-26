class Solution {
public:
   int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int maxw = 0; // Initialize maxw to 0 instead of INT_MIN
    while (i < n) {
        if (nums[i] == 1) {
            int j = i + 1;
            while (j < n && nums[j] == 1) {
                j++;
            }
            int win = j - i; // Remove +1 from win calculation
            maxw = max(maxw, win);
            i = j; // Remove +1 from i update
        }
        i++;
    }
    return maxw;
}

};