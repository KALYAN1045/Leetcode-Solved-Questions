class Solution {
public:
    double pow(double x, int n){
        if(n == 0){
            return 1;
        }
        return x*pow(x, n-1);
    }

    double myPow(double x, int n) {
        double ans;
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
        if(n < 0){
            n = -1 * n;
            ans = 1.0/pow(x, n);
        }
        else{
            ans = pow(x, n);
        }
        return ans;
    }
};