class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    vector<int> ans;
    int n = nums.size();
    if (n == 0) return 0;
    for (int i = 0; i < n; i++) {
        if (i == n-1 || nums[i] != nums[i+1]) {
            ans.push_back(nums[i]);
        }
    }
    nums = ans;
    return nums.size();
}

};