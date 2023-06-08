class Solution {
public:
int sumi(int l, int h, vector<int> &vec){
    int ans=-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(vec[m]<0){
            ans=m;
            h=m-1;
        } 
        else{
            l=m+1;
        }
    }
    return ans;
}

    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            int ind=sumi(0,n-1,grid[i]);
            if(ind!=-1) ans+=n-ind;
        }
        return ans;
    }
};