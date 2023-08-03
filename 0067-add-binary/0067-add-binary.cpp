#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int l = max(a.size(), b.size());
        int m = a.size();
        int n = b.size();
        bool x = 0;
        string ans = "";
        for (int i = 0; i < l; i++) {
            char ch_a = (m > 0) ? a[m - 1] : '0';
            char ch_b = (n > 0) ? b[n - 1] : '0';
            if (ch_a == '1' && ch_b == '1') {
                ans += (x ? '1' : '0');
                x = true;
            } else if ((ch_a == '1' || ch_a == ' ') && (ch_b == ' ' || ch_b == '0') || 
                       (ch_a == ' ' || ch_a == '0') && (ch_b == '1' || ch_b == ' ')) {
                ans += (x ? '0' : '1');
            } else {
                ans += (x ? '1' : '0');
                x = false;
            }
            m--;
            n--;
        }
        if (x) {
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
