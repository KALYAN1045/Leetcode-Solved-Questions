class Solution {
public:
   int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int maxw = 0; 
    while (i < n) {
        if (nums[i] == 1) {
            int j = i + 1;
            while (j < n && nums[j] == 1) {
                j++;
            }
            int win = j - i;
            maxw = max(maxw, win);
            i = j ; 
        }
        i++;
    }
    return maxw;
}

};