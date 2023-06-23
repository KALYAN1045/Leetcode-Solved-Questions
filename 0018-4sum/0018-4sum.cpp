class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>>s;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
            int lo = j + 1;
            int hi = n - 1;
            long long int sum = (nums[i] + nums[j]);
            while(lo < hi){
                if(nums[lo] + nums[hi] == t - sum){
                    vector<int>temp;
                    temp = {nums[i], nums[j], nums[lo], nums[hi]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                    lo++;
                    hi--;
                }
                else if(nums[lo] + nums[hi] < t - sum) lo++;
                else hi--;
            }
            }
        }
        ans.assign(s.begin(),s.end());
        return ans;
    }
};