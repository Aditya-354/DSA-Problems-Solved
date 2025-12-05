#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        if (nums.size() <= 1) return nums[0];

        int current_maximum = nums[0];
        int actual_maximum = nums[0];

        for(size_t i = 1; i < nums.size(); i++)
        {
            current_maximum = max(nums[i], current_maximum + nums[i]);

            actual_maximum = max(actual_maximum, current_maximum);
        }

        return actual_maximum;
    }
};

int main()
{
    // TEST ARRAYS
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> nums = {5,4,-1,7,8};
    // vector<int> nums = {-2, -3, -1}; 

    Solution s;
    int mx = s.maxSubArray(nums);
    cout << mx;
}
