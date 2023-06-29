class Solution {
public:
    int minimumRefill(vector<int>& p, int cA, int cB) {
        int n = p.size();
        int i = 0;
        int j = n -1;
        int sum = 0;
        int n1 = cA;
        int n2 = cB;
        while(i<=j){
            if(i == j){
                if(n1 < p[i] && n2 < p[i]){
                    sum++;
                }
            }
            else{
                if(n1 >= p[i]){
                    n1 -= p[i];
                }
                else if(n1 < p[i]){
                    sum++;
                    n1 = cA;
                    n1 -= p[i];
                }
                if(n2 >= p[j]){
                    n2 -= p[j];
                }
                else if(n2 < p[j]){
                    sum++;
                    n2 = cB;
                    n2 -= p[j];
                }
            }
            i++;
            j--;
        }
        return sum;
    }
};