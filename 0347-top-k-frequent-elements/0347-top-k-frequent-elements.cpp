class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto it:nums)
        {
            m[it]++;
        }
        vector<pair<int,int>> v;
        for(auto it:m)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};