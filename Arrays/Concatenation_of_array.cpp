// Date: 08-11-2025

#include<iostream>
#include<vector>
// #include<iomanip>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        for(int i = 0; i < n; i++)
        {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }


        // ALTERNATE SHORT METHOD
        // vector<int> ans = nums;
        // ans.insert(ans.end(), nums.begin(), nums.end());

        
        return ans;
    }
};

int main(int argv, char* argc[])
{
    Solution s;
    vector<int> nums = {1, 2, 1};
    vector<int> newNums = s.getConcatenation(nums);
    for(int i = 0; i < newNums.size(); i++)
    {
        cout << newNums[i] << endl;
    }
    std::cin.get();
    return 0;
}