// Problem: 137. Single Number II
// Date: 04_07_23
// Link: https://leetcode.com/problems/single-number-ii/description/
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;

        for (int i = 0; i < 32; ++i)
        {
            int sum = 0;
            for (const int num : nums)
                sum += num >> i & 1;
            sum %= 3;
            ans |= sum << i;
        }

        return ans;
    }
};