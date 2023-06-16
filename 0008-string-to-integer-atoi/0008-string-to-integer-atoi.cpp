class Solution {
public:
    long funcatoi(string s, int i, int sign, long result){
        if(sign*result <= INT_MIN){
            return INT_MIN;
        }
        if(sign*result >= INT_MAX){
            return INT_MAX;
        }
        if(i >= s.size() || s[i] < '0' || s[i] > '9') return sign*result;
        result = funcatoi(s, i+1, sign, (result*10 + (s[i]-'0')));
        return result;
    }

    int myAtoi(string s) {
        int i = 0, n = s.size(), sign = 1;
        while (i < n && s[i] == ' ')
        {            ++i;}
            if(s[i] == '-'){
                sign = -1,++i;
            }
            else if(s[i] == '+') ++i;
        return funcatoi(s, i, sign, 0);
    }
};