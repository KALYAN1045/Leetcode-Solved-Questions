class Solution {
public:
    int trap(vector<int>& h) {
        int  n = h.size();
        vector<int> suffmax(n, 0);
        suffmax[n-1] = h[n-1];
        for(int j = n - 2; j >=0; j--){
            suffmax[j] = max(suffmax[j+1],h[j]);
        }
        vector<int> prefmax(n, 0);
        prefmax[0] = h[0];
        for(int i = 1; i < n; i++){
            prefmax[i] = max(prefmax[i-1],h[i]);
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            int unit = min(prefmax[i], suffmax[i]) - h[i];
            res += unit;
        }
        return res;
    }
};
