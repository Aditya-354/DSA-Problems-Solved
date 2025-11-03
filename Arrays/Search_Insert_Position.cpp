#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[i] >= target)
            {
                return i;
            }
            // if(nums[i] == target)
            // {
            //     return i;
            // }
            // else if(nums[i] + 1 == target)
            // {
            //     return i + 1;
            // }
        }
        return n;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    int result = s.searchInsert(nums, target);
    cout << result << endl;
    return 0;
}