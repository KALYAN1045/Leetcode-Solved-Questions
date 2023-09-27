class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n = mat.size();
        int m = mat[0].size();
        int i = 0;
        int j = n*m-1;
        while(i <= j){
            int mid = i + (j-i)/2;
            int row = mid/m;
            int col = mid%m;
            if(mat[row][col] == t) return 1;
            else if(mat[row][col] > t) j = mid-1;
            else i = mid+1;
        }
        return 0;
    }
};