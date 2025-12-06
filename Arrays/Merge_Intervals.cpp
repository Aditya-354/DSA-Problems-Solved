#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> mergeIntervals(std::vector<std::vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        std::vector<std::vector<int>> merged;
        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++)
        {
            std::vector<int> &last = merged.back();
            if (intervals[i][0] <= last[1])
            {
                last[1] = std::max(last[1], intervals[i][1]);
            }
            else
            {
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }
};

int main()
{
    Solution s;
    std::vector<std::vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    std::vector<std::vector<int>> merged = s.mergeIntervals(intervals);

    for (auto &x : merged)
    {
        std::cout << "[ ";
        for (auto &y : x)
        {
            std::cout << y << " ";
        }
        std::cout << "]";
        std::cout << ", ";
    }
}