class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int n= s.size();
        int maxw=0;
        unordered_map<char,int>mp;
        while(j < n){
            mp[s[j]]++;
            if(mp[s[j]] == 1){
                maxw = max(maxw, j-i+1);
                j++;
            }
            else if(mp[s[j]] > 1){
                while(mp[s[j]] > 1){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0)  mp.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxw;
    }
};