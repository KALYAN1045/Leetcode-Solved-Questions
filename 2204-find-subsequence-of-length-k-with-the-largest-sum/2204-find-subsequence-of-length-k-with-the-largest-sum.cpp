class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(int i = 0; i < nums.size(); i++){
            minh.push({nums[i], i});
            if(minh.size() > k){
                minh.pop();
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>sorth;
        while(minh.size() > 0){
            sorth.push({minh.top().second, minh.top().first});
            minh.pop();
        }
        vector<int>ans;
        while(sorth.size() > 0){
            ans.push_back(sorth.top().second);
            sorth.pop();
        }
        return ans;
    }
};