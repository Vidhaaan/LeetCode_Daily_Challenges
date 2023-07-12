// Problem: 1161. Maximum Level Sum of a Binary Tree
// Date: 15th June
class Solution
{
public:
    int maxLevelSum(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        queue<TreeNode *> q;
        int maxLevel = 1;
        int maxSum = root->val;
        q.push(root);

        int level = 1;
        while (!q.empty())
        {
            int size = q.size();
            int sum = 0;
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                sum += node->val;
                if (node->left != nullptr)
                {
                    q.push(node->left);
                }
                if (node->right != nullptr)
                {
                    q.push(node->right);
                }
            }

            if (sum > maxSum)
            {
                maxSum = sum;
                maxLevel = level;
            }

            level++;
        }

        return maxLevel;
    }
};
