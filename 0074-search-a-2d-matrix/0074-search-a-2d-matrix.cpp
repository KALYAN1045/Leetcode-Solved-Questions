class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n = mat.size();
        int m = mat[0].size();
        int i = n-1;
        int j = m-1;
        while(i >= 0 && j >= 0){
            if(mat[i][j] == t) return 1;
            if(mat[i][j] > t && mat[i][0] > t) i--;
            else j--;
        }
        return 0;
    }
};