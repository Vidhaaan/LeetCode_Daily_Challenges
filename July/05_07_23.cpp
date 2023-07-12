// Problem: 1493. Longest Subarray of 1's After Deleting One Element
// Date: 05_07_23
// Link: https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int head = 0, tail = 0, cnt = 0, len = 0;
        for (; head < nums.size(); head++)
        {
            if (nums[head] == 0)
                cnt++;
            while (cnt > 1)
            {
                if (nums[tail] == 0)
                    cnt--;

                tail++;
            }
            len = max(len, (head - tail));
        }
        return len;
    }
};