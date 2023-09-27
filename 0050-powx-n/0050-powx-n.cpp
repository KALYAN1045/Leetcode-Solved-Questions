class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n == 0) return 1;
        long long N = n;
        if (N < 0) N = -1 * N;
        while (N) {
            if (N % 2) {
                ans = ans * x;
                N = N - 1;
            } else {
                x = x * x;
                N = N / 2;
            }
        }
        return (n<0)?(double)1/ans:ans;
    }
};