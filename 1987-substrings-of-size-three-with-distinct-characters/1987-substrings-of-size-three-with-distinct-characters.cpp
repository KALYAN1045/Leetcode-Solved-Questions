class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int k = 3;
        int i = 0;
        int j = 0;
        int cnt = 0;
        while( j < n ){
            mp[s[j]]++;
            if(j - i + 1 < k) j++;
            else if(j - i + 1 == k){
                if(mp.size() == k) cnt++;
                if(mp[s[i]] == 1) mp.erase(s[i]);
                else{
                    mp[s[i]]--;
                }
                i++;
                j++;
            }
        }
        return cnt;
    }
};