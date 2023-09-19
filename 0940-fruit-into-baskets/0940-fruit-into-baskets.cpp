class Solution {
public:
    int totalFruit(vector<int>& s) {
        unordered_map<int,int>mp;
        int i = 0;
        int j = 0;
        int n = s.size();
        int maxf = INT_MIN;
        if(n == 1 || n == 2) return n;
        while(j < n){
            mp[s[j]]++;
            if(mp.size() == 2 || mp.size() == 1){
                maxf = max(maxf, j-i+1);
            }
            else if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0) mp.erase(s[i]);
                    i++;
                }
            }
            j++;
        }
        return maxf;
    }
};