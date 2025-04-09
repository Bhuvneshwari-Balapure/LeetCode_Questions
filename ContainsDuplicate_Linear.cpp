#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
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
}