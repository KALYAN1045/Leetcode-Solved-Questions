class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int l = 0;
        int m = mat.size();
        int n = mat[0].size();
        int  r = (n * m) - 1;
        while(l<=r){
            int mid = l + (r - l) / 2;
            if(mat[mid/n][mid%n] == t) return true;
            if(mat[mid/n][mid%n] > t) r = mid - 1;
            if(mat[mid/n][mid%n] < t) l = mid + 1;
        }
        return false;
    }
};