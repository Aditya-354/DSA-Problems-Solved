#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto it : nums)
        {
            mp[it]++;
            if(mp[it] > 1)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    bool a = s.containsDuplicate(nums);
    cout << a << endl;
    std::cin.get();
    return 0;
}