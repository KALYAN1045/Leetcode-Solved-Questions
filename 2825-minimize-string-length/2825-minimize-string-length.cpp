class Solution {
public:
    int minimizedStringLength(string s) {
        int sumi = 0;
        sort(s.begin(),s.end());
        int i = 0;
        int cnt2 = 1;
        while(i < s.size()){
            char k = s[i];
            int j = i + 1;
            int cnt = 1;
            while(j < s.size()){
                if(s[j] != k){
                    cnt2 += 1;
                    break;
                }
                else{
                    cnt++;
                    j++;
                }
            }
            i=j;
        }
        return cnt2;
    }
};