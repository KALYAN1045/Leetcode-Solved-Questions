class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i = n; i >= 0; i--){
            int nums = num[i] - '0';
            if(nums%2 != 0){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};
