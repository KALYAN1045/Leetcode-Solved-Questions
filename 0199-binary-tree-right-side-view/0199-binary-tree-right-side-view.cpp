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
    void f(TreeNode* root, int l, vector<int>&v){
        if(root == NULL) return;
        if(l == v.size()) v.push_back(root->val);
        if(root->right) f(root->right, l+1, v);
        if(root->left) f(root->left, l+1, v);
        return;
    } 
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        f(root, 0, v);
        return v;
    }
};