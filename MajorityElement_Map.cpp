#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] > nums.size() / 2)
            {
                return nums[i];
            }
        }
        return {};
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {3, 2, 3};
    int ans = obj.majorityElement(nums);
    cout << "Majority Element is : " << ans;
    return 0;
}