class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int>mp;
        for(auto i:nums) {
            if(i == 0) continue;
            mp[i]++;
        }
        return mp.size();
    }
};