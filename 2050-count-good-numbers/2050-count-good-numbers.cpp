class Solution {
public:
long long pow(long long x, long long n){
        if(n == 0) return 1;
        long long temp = pow(x, n/2);
        long long ans = temp * temp;
        ans %= 1000000007;
        if(n % 2 == 1){
            ans *= x;
            ans %= 1000000007;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;

        return (pow(5,even) * pow(4,odd))%1000000007;
    }
};