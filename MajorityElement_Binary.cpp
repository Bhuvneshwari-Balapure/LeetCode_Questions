#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
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