#include<bits/stdc++.h>

class Solution
{
public: 
    std::vector<int> productExceptSelf(std::vector<int>& nums)
    {
        int n = nums.size();
        std::vector<int> answer(n, 1);

        int prefix = 1;
        for(int i = 0; i < n; i++)
        {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int i = n - 1; i >= 0; i--)
        {
            answer[i] *= suffix;
            suffix *= nums[i];
        }
        return answer;
    }
};

int main()
{
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> ans = s.productExceptSelf(nums);
    for(int val : ans)
    {
        std::cout << val << " ";
    }
}