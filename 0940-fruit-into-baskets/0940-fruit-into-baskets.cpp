class Solution {
public:
    int totalFruit(vector<int>& f) {
        int i = 0;
        int j = 0;
        int n = f.size();
        unordered_map<int, int>mp;
        int maxw = 1;
        while(j < n){
            mp[f[j]]++;
            if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[f[i]]--;
                    if(mp[f[i]] == 0) mp.erase(f[i]);
                    i++;
                }
            }
            maxw = max(maxw, j-i+1);
            j++;
        }
        return maxw;
    }
};