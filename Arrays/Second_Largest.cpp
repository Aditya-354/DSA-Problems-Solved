#include <iostream>   // For input/output operations (cout, endl)
#include <vector>     // For using the std::vector container
#include <climits>    // For INT_MIN and INT_MAX constants

/*
    Program: Find the Second Largest Element in an Array
    Description:
        This program defines a class 'Solution' containing a method 'getSecondLargest'
        that finds and returns the second largest DISTINCT element in a vector of integers.
        If the array has fewer than two distinct elements, it returns -1.
*/

class Solution
{
public:
    // Function to find the second largest distinct element in a vector
    int getSecondLargest(std::vector<int>& arr)
    {
        // If array has less than 2 elements, second largest cannot exist
        if (arr.size() < 2) 
            return -1;

        // Initialize two tracking variables
        // INT_MIN ensures even negative numbers are handled correctly
        int firstMax = INT_MIN;   // Largest element so far
        int secondMax = INT_MIN;  // Second largest element so far

        // Traverse through the array once
        for (int num : arr)
        {
            // Case 1: Found a new largest element
            if (num > firstMax)
            {
                // Shift the old firstMax down to secondMax
                secondMax = firstMax;
                firstMax = num;
            }
            // Case 2: Current number is less than firstMax but greater than secondMax
            else if (num > secondMax && num < firstMax)
            {
                // Update the second largest value
                secondMax = num;
            }
        }

        // If secondMax was never updated, return -1 (no second largest found)
        return (secondMax == INT_MIN ? -1 : secondMax);
    }
};

int main()
{
    // Create an instance of Solution class
    Solution s;

    // Input array of integers
    std::vector<int> arr = {4, 9, 10, 8, 14, 6};

    // Call the function and store the result
    int secondL = s.getSecondLargest(arr);

    // Display the second largest element
    std::cout << "Second largest element: " << secondL << std::endl;

    return 0;
}

/*
        EDGE CASES
==============================
1. Array has fewer than 2 elements → return -1
2. All elements are equal → return -1
3. Works with negative numbers since we start with INT_MIN
==============================
*/
