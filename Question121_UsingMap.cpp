#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        unordered_map<int, int> mp;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
        }
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    int ans = obj.maxProfit(nums);
    cout << "Maximum Profit is : " << ans;
    return 0;
}