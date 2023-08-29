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

    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* curr = s.top();
            s.pop();
            int num = curr->val;
            if(curr->right){
                curr->right->val += num << 1;
                s.push(curr->right);
            }
            if(curr->left){
                curr->left->val += num << 1;
                s.push(curr->left);
            } 
            if(!curr->right && !curr->left){
                ans += num;
            }
        }
        return ans;
    }   
};

// if (root == NULL)
//         return 0;

//     stack<TreeNode*> s;
//     s.push(root);
//     int totalSum = 0;

//     while (!s.empty()) {
//         TreeNode* curr = s.top();
//         s.pop();
//         int num = curr->val;

//         if (curr->right) {
//             curr->right->val += num << 1;
//             s.push(curr->right);
//         }

//         if (curr->left) {
//             curr->left->val += num << 1;
//             s.push(curr->left);
//         }

//         if (!curr->left && !curr->right) {
//             totalSum += num;
//         }
//     }

//     return totalSum;