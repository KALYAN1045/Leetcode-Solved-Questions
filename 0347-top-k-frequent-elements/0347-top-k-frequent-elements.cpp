class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        priority_queue < pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > minh;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i = mp.begin(); i != mp.end(); i++){
            minh.push({i->second, i->first});
            if(minh.size() > k){
                minh.pop();
            }
        }
        vector<int>ans;
        while(minh.size() > 0){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};