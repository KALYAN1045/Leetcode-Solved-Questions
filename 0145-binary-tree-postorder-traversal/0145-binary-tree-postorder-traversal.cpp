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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        vector<int>ans;
        if(root == NULL) return ans;
        s1.push(root);
        while(!s1.empty()){
            TreeNode* curr = s1.top();
            s2.push(s1.top());
            s1.pop();
            if(curr->left != NULL) s1.push(curr->left);
            if(curr->right != NULL) s1.push(curr->right);
        }
        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }
};