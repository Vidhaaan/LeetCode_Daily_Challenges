// Problem: 530. Minimum Absolute Difference in BST
// Date: 14th June

class Solution
{
public:
    int min_dif = INT_MAX;
    int val = -1;
    int getMinimumDifference(TreeNode *root)
    {
        if (root->left != NULL)
            getMinimumDifference(root->left);
        if (val >= 0)
            min_dif = min(min_dif, root->val - val);
        val = root->val;
        if (root->right != NULL)
            getMinimumDifference(root->right);
        return min_dif;
    }
};