#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                return {mp[target - nums[i]], i};
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {2, 11, 15, 7};
    int target = 9;
    vector<int> ans = obj.twoSum(nums, target);
    cout << "Solution : " << ans[0] << " " << ans[1] << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}