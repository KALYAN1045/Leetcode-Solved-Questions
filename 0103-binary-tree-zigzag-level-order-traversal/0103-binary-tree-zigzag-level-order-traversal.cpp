/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool trigger = 0;
        while(!q.empty()){
            int qsize = q.size();
            vector<int>v;
            while(qsize--){
                TreeNode*curr = q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            if(trigger){
                reverse(v.begin(),v.end());
                ans.push_back(v);
                trigger=0;
            }else{
                ans.push_back(v);
                trigger=1;
            }
        }
        return ans;
    }
};