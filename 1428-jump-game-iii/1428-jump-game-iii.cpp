class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int>vis(arr.size(),0);
        queue<int>q;
        q.push(start);
        vis[start] = 1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            if(arr[top] == 0) return 1;
            if(top+arr[top] < arr.size() && vis[top+arr[top]] == 0){
                q.push(arr[top]+top);
                vis[arr[top]+top] = 1;  
            }
            if(top-arr[top] >= 0 && vis[top-arr[top]] == 0){
                q.push(top-arr[top]);
                vis[top-arr[top]] = 1;
            } 
        }
        return  0;
    }
};