#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
            if (mp[nums[i]] >= 2)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3, 1};
    if (obj.containsDuplicate(nums))
    {
        cout << "Contains Duplicate" << endl;
    }
    else
    {
        cout << "Does not contain Duplicate" << endl;
    }
    return 0;
}