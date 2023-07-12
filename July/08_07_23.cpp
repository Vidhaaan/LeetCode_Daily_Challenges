// Problem: 2551. Put Marbles in Bags
// Date: 08_07_23
// Link: https://leetcode.com/problems/put-marbles-in-bags/
class Solution
{
public:
    long long putMarbles(vector<int> &weights, int k)
    {
        vector<long> sum;
        int n = weights.size();
        for (int i = 0; i < n - 1; i++)
        {
            sum.push_back(weights[i] + weights[i + 1]);
        }
        sort(sum.begin(), sum.end());
        long long max = 0, min = 0;
        for (int i = 0; i < k - 1; i++)
        {
            max += sum[n - i - 2];
            min += sum[i];
        }
        return max - min;
    }
};