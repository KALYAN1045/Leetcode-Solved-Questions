class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        unordered_map<string, int>mp;
        while(j < n){
            if(j-i+1 < 10){
                j++;
            }
            else if(j-i+1 == 10){
                mp[s.substr(i, j-i+1)]++; 
                i++;
                j++;
            }
        }
        vector<string>ans;
        for(auto i : mp){
            if(i.second > 1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};