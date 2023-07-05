class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxLength = 0;
    int n = nums.size();
    int left = 0, right = 0;
    int zeroCount = 0;

    while (right < n) {
        if (nums[right] == 0) {
            zeroCount++;
        }

        while (zeroCount > 1) {
            if (nums[left] == 0) {
                zeroCount--;
            }
            left++;
        }

        int currentLength = right - left ;
        maxLength = std::max(maxLength, currentLength);

        right++;
    }

    return maxLength;

    }
};