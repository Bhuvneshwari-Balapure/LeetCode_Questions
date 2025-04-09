#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
            if (count > nums.size() / 2)
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
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int ans = obj.majorityElement(nums);
    cout << "Majority Element is : " << ans;

    return 0;
}