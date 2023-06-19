class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int j = 0;
        int n = s.size();
        int cnt = 0;
        while(j < n - k + 1){
            int dividend = stoi(s.substr(j,k));
            if(dividend > 0){
                if(num % dividend == 0) cnt++;
            }
            j++;
        }
        return cnt;
    }
};