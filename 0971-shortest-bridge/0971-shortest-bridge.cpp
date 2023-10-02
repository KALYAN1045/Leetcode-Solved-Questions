class Solution {
public:
    void dfs(int x, int y, vector<int>&r, vector<int>&c, vector<vector<int>>& grid, queue<pair<int,int>>&q, int n){
        grid[x][y] = 2;
        q.push({x,y});
        for(int i = 0; i < 4; i++){
            int nx = x+r[i];
            int ny = y+c[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 1){
                dfs(nx, ny, r, c, grid, q, n);
            }
        }
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        int x = -1, y = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        vector<int>r = {0, 0, 1, -1};
        vector<int>c = {1, -1, 0, 0};
        queue<pair<int,int>>q;
        dfs(x, y, r, c, grid, q, n);
        int dist = 0;
        while(!q.empty()){
            int k = q.size();
            while(k--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i = 0; i < 4; i++){
                    int nx = x+r[i];
                    int ny = y+c[i];
                    if(nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 1){
                        return dist;
                    }
                    else if(nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] == 0){
                        q.push({nx,ny});
                        grid[nx][ny] = -1;
                    }
                }
            }
            dist++;
        }
        return -1;
    }
};