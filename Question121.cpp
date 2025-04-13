#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minPrice)
            {
                minPrice = prices[i];
            }
            else
            {
                int profit = prices[i] - minPrice;
                maxProfit = max(maxProfit, profit);
            }
        }
        return maxProfit;
    }
};
int main()
{
    Solution obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = obj.maxProfit(prices);
    cout << "Maximum Profit is : " << ans;
    return 0;
}