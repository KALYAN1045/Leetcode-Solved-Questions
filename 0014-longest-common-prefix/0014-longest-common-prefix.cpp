class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string m=strs[0];
        string n=strs[strs.size()-1];
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            if(m[i]==n[i]){
                ans+=m[i];
            }
            else break;
        }
        return ans;
              
        
    }
};