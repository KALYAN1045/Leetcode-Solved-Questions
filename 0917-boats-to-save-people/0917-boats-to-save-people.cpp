class Solution {
public:
    int numRescueBoats(vector<int>& p, int lim) {
        sort(p.begin(), p.end());
        int n =  p.size();
        int i = 0;
        int j = n - 1;
        int res = 0;
        while(i <= j){
            while(i <=j && p[j] > lim) j--;
            if(i <= j && p[j] == lim){
                res++;
                j--;
            }
            else if(i != j && p[i]+p[j] <= lim){
                res++;
                i++;
                j--;
            }
            else{
                res++;
                j--;
            }
        }
        return res;
    }
};