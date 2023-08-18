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
        vector<int> result;
    stack<TreeNode*> s;
    
    if (root == nullptr) {
        return result;
    }
    
    s.push(root);
    TreeNode* prev = nullptr;
    
    while (!s.empty()) {
        TreeNode* curr = s.top();
        
        // Check if we are moving down the tree
        if (prev == nullptr || prev->left == curr || prev->right == curr) {
            if (curr->left != nullptr) {
                s.push(curr->left);
            } else if (curr->right != nullptr) {
                s.push(curr->right);
            }
        }
        // Check if we are moving up the tree from the left side
        else if (curr->left == prev) {
            if (curr->right != nullptr) {
                s.push(curr->right);
            }
        }
        // Done with both subtrees, pop and add to result
        else {
            result.push_back(curr->val);
            s.pop();
        }
        
        prev = curr;
    }
    
    return result;
    }
};