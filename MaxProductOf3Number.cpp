#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int s = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < s; i++)
        {
            mp[nums[i]] = 1;
        }
        int product1 = nums[s - 1] * nums[s - 2] * nums[s - 3];
        int product2 = nums[0] * nums[1] * nums[s - 1];
        return max(product1, product2);
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3, 4};
    int ans = obj.maximumProduct(nums);
    cout << "Maximum Product is : " << ans;
    return 0;
}