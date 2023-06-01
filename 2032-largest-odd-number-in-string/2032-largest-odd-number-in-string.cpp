class Solution {
public:
    string largestOddNumber(string num) {
        int i, j, l, r;
        int m = num[num.size() - 1] - '0';
        if(m % 2 != 0) return num;
        for(i = 0; i < num.size(); i++){
            int k = num[i] - '0';
            if(k%2 != 0){
                l = i;
                break;
            }
        }
        for(j = num.size(); j >= 0; j--){
            int k = num[j] - '0';
            if(k%2 != 0){
                r = j;
                break;
            }
        }
        if(l == r) return num.substr(l, 1);
        string ans = "";
        for(int a = 0; a <= r; a++){
            ans+= num[a];
        }
        return ans;
    }
};