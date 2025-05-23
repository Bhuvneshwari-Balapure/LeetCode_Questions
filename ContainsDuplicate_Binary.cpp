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
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
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