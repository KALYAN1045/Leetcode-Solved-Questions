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
    int findSecondMinimumValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        priority_queue<int, vector<int>, greater<int>> minh;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            minh.push(curr->val);
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        int mini = minh.top();
        while(!minh.empty() && mini == minh.top()) minh.pop();
        if(minh.empty()) return -1;
        return minh.top();
    }
};