class Solution {
public:
    bool rotateString(string s, string goal) {
        int k =s.size();
        while(k--){
            char ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);
            if(s == goal) return true;
        }
        return false;
    }
};