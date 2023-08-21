/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        unordered_map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left && !parent[curr->left]){
                q.push(curr->left);
                parent[curr->left] = curr;
            }
            if(curr->right && !parent[curr->right]){
                q.push(curr->right);
                parent[curr->right] = curr;
            }
        }
        q.push(target);
        int curr_level = 0;
        vis[target] = 1;
        while(!q.empty()){
            int qsize = q.size();
            if(curr_level++ == k) break;
            while(qsize--){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left && !vis[curr->left]){
                    q.push(curr->left);
                    vis[curr->left] = 1;
                }
                if(curr->right && !vis[curr->right]){
                    q.push(curr->right);
                    vis[curr->right] = 1;
                }
                if(parent[curr] && !vis[parent[curr]]){
                    q.push(parent[curr]);
                    vis[parent[curr]] = 1;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};