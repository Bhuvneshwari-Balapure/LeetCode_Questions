#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int arraySum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            arraySum += nums[i];
        }
        int totalSum = n * (n + 1) / 2;
        int missingNumber = totalSum - arraySum;
        return missingNumber;
    }
};
int main()
{
    Solution obj;
    vector<int> nums = {3, 0, 1};
    int ans = obj.missingNumber(nums);
    cout << "Missing Number is : " << ans;
    return 0;
}