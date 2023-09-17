class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int cnt = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++){
            if(nums[i] == nums[i+1]){
                cnt++;
                continue;
            }
            if(cnt > n/3){
                ans.push_back(nums[i]);
            }
            cnt = 1;
        }
        if(cnt > n/3){
            ans.push_back(nums[n-1]);
        }
        return ans;
    }
};