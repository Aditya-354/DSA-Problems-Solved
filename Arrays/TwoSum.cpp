#include <iostream>
#include <vector>   
#include <unordered_map>                 

class Solution
{
public:

    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        size_t n = nums.size();              
        std::unordered_map<int, int> mp;      
        for (size_t i = 0; i < n; i++)        
        {
            size_t diff = target - nums[i]; 
            if (mp.find(diff) != mp.end())  
            {
                return {mp[diff], (int)i};   
            }
            mp[nums[i]] = i;   
        }
        return {};  
    }
};

int main()
{
    Solution s;
    std::vector<int> arr = {3, 2, 4}; 
    int T = 6;  
    std::vector<int> result = s.twoSum(arr, T);  
    if (!result.empty())      
        std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;   
    else
        std::cout << "No solution found" << std::endl;         
    return 0;
}