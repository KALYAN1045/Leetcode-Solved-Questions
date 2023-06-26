class Solution {
public:
    int minimumRecolors(string b, int k) {
    int n = b.size();
    int i = 0;
    int j = 0;
    int wcnt = 0;
    int minwcnt = INT_MAX;
    while (j < n) {
        if (b[j] == 'W') wcnt++;
        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) {
            minwcnt = min(minwcnt, wcnt);
            if (b[i] == 'W') wcnt--;
            i++;
            j++;
        } 
    }
    return minwcnt;
}

};