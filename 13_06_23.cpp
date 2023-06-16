// Problem: 2352. Equal Row and Column Pairs
// Date: 13th June
class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        map<vector<int>, int> cnt;
        int row = grid.size(), col = grid[0].size(), ans = 0;
        for (int i = 0; i < row; i++)
        {
            cnt[grid[i]] += 1;
        }
        for (int i = 0; i < row; i++)
        {
            vector<int> column_list;
            for (int j = 0; j < col; j++)
            {
                column_list.push_back(grid[j][i]);
            }
            ans += cnt[column_list];
        }
        return ans;
    }
};