// Problem: 228. Summary Ranges
// Date: 12th June
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> list;
        for (int i = 0; i < nums.size(); i++)
        {
            int start = nums[i];
            while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1])
                i++;

            if (start != nums[i])
            {
                list.push_back("" + to_string(start) + "->" + to_string(nums[i]));
            }
            else
            {
                list.push_back("" + to_string(start));
            }
        }
        return list;
    }
};