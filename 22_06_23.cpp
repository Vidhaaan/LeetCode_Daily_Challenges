// Problem: 714. Best Time to Buy and Sell Stock with Transaction Fee
// Date: 22th June
class Solution
{
public:
    int maxProfit(vector<int> &prices, int fee)
    {
        int buy = INT_MIN;
        int sell = 0;

        for (int price : prices)
        {
            buy = max(buy, sell - price);
            sell = max(sell, buy + price - fee);
        }

        return sell;
    }
};