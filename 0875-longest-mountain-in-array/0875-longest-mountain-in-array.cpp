class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        
        int i = 1;
        int ans = 0; 
        while(i < n){
            int lb = 0;
            int ub = 0;
            while(i < n && arr[i] == arr[i-1]) i++;
            while(i < n && arr[i] > arr[i-1]){
                ub++;
                i++;
            }
            while(i < n && arr[i] < arr[i-1]){
                lb++;
                i++;
            }
            if(ub && lb){
                ans = max(ans, lb+ub+1);
            }
        }
        return ans;
    }
};