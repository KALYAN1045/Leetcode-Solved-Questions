class Solution {
public:
    int trap(vector<int>& h) {
        int  n = h.size();
        int l = 0;
        int r = n - 1;
        int lmax = 0;
        int rmax = 0;
        int res = 0;
        while(l < r){
            if(h[l] <= h[r]){
                if(h[l] > lmax){
                    lmax = h[l];
                }else{
                    res += (lmax - h[l]);
                }
                l++;
            }else{
                if(h[r] > rmax){
                    rmax = h[r];
                }else{
                    res += (rmax - h[r]);
                }
                r--;
            }
        }
        return res;
    }
};
