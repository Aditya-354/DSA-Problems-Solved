#include<iostream>
#include<vector>

// We define a class Solution like LeetCode format
class Solution
{
 public:
    // This function removes duplicates from a sorted array in place
    int removeDuplicates(std::vector<int>& nums)
    {
        // Pointer 'i' will track the position of the last unique element
        int i = 0;

        // Start j from index 1, because nums[0] is always unique
        for(size_t j = 1; j < nums.size(); j++)
        {
            // If current element is different from the last unique element
            if(nums[j] != nums[i])
            {
                i++;               // Move i forward to place the next unique element
                nums[i] = nums[j]; // Overwrite nums[i] with the new unique element
            }
        }
        // i is index of last unique element, so number of unique elements is i + 1
        return i + 1;
    }
};

int main()
{
    Solution s;

    // Input array (sorted, as required by problem)
    std::vector<int> nums = {1, 1, 2};

    // Expected output after removing duplicates
    std::vector<int> expectednums = {1, 2};

    // k = number of unique elements after processing
    int k = s.removeDuplicates(nums);

    // Check if the returned count matches expected size
    if(k == expectednums.size())
    {
        // Print first k elements (unique part of array)
        for(size_t i = 0; i < k; i++)
        {
            std::cout << nums[i] << std::endl;
        }
    }
    return 0;
}
