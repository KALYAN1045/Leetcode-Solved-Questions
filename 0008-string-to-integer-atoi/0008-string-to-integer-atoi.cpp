class Solution {
public:
    int myAtoi(string s) {
        int len=s.length();

        if(len==0) return 0;
        int i=0;
        while(i<len and s[i]==' ') i++;

        s=s.substr(i);

        int sign = +1;
        long ans=0;

        if(s[0]=='-') sign=-1;

        int mx=INT_MAX,mn=INT_MIN;

        i = (s[0]=='+' || s[0]== '-') ? 1 : 0;

        while(i<s.length()){

            if(s[0]== ' ' || !isdigit(s[i])) break;

            ans = ans*10 + s[i]-'0';

            if(sign==-1 and -1*ans < mn) return mn;
            if(sign==1 and ans>mx) return mx;

            i++;
        }

        return (int)(sign*ans);
    }
};