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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;

    queue<TreeNode*> q1, q2;
    q1.push(p);
    q2.push(q);

    while (!q1.empty() && !q2.empty()) {
        TreeNode* curr1 = q1.front();
        TreeNode* curr2 = q2.front();
        q1.pop();
        q2.pop();

        if (curr1 == NULL && curr2 == NULL)
            continue;
        if (curr1 == NULL || curr2 == NULL)
            return false;

        if (curr1->val != curr2->val)
            return false;

        q1.push(curr1->left);
        q2.push(curr2->left);

        q1.push(curr1->right);
        q2.push(curr2->right);
    }

    return q1.empty() && q2.empty();
    }
};