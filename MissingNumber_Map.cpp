

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = 1;
        }
        for (int i = 0; i <= nums.size(); i++)
        {
            if (mp.find(i) == mp.end())
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {0, 1};
    int ans = obj.missingNumber(nums);
    cout << "Missing Number is : " << ans;
    return 0;
}