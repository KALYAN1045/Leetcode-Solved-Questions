#define lli long long int
class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long success) {
        vector<int>ans;
        sort(p.begin(),p.end());
        int m = s.size();
        int n = p.size();
        for(int i = 0; i < m; i++){
        int l = 0;
        int r = n - 1;
        int mid;
        while(l <= r){
            mid = l + (r - l)/2;
            if((lli)s[i] * (lli)p[mid] >= success) r = mid - 1;
            else l = mid + 1;
            }
        ans.push_back(n - 1 - r);
        }
        return ans;        
    }
};