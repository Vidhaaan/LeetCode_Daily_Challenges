// Problem: 111. Minimum Depth of Binary Tree
// Date: 10_07_23
// Link: https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        int m1 = INT_MAX;
        if (root->left)
            m1 = min(minDepth(root->left), m1);
        if (root->right)
            m1 = min(minDepth(root->right), m1);
        return m1 + 1;
    }
};