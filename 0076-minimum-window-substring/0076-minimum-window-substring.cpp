class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n < m) return "";
        unordered_map<char, int> mp;
        for(int i = 0; i < m; i++){
            mp[t[i]]++;
        }
        int cnt = 0;
        int i = 0;
        int j = 0;
        int min_len = INT_MAX;
        int mini = 0;
        while(j < n){
            if(mp[s[j]] > 0){
                cnt++;
            }
            mp[s[j]]--;
            if(cnt == m){
                while(i < j && mp[s[i]] < 0){
                    mp[s[i]]++;
                    i++;
                }
                if(min_len > j - i){
                    min_len = j - i + 1;
                    mini = i;
                }
                mp[s[i]]++;
                cnt--;
                i++;
            }
            j++;
        }
        return min_len == INT_MAX ? "" : s.substr(mini,min_len);
    }
};