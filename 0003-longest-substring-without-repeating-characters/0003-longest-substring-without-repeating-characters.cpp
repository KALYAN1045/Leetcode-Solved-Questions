class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int i = 0;
        int j = 0;
        int n = s.size();
        if(s == "") return 0;
        int maxw = INT_MIN;
        while(j < n){
            mp[s[j]]++;
            if(mp[s[j]] == 1){
                maxw = max(maxw, j-i+1);
            }
            else if(mp[s[j]] > 1){
                while(mp[s[j]] > 1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0) mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
        return maxw;
    }
};