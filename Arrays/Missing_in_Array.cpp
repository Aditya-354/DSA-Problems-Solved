#include <iostream>  // For input/output operations (cout, endl)
#include <vector>    // For using std::vector container

/*
    Program: Find the Missing Number in a Sequence
    Description:
        This program defines a class 'Solution' that contains a method 'missingNum'
        to find the missing number in an array containing 'n' distinct numbers from 1 to n+1.
        The approach uses the mathematical sum formula to determine which number is missing.
*/

class Solution
{
public:
    // Function to find the missing number from an array of integers
    int missingNum(std::vector<int> &arr)
    {
        // Step 1: Find the expected total sum of first 'n' natural numbers.
        // Since one number is missing, the actual number of elements in the array is (n - 1),
        // so the full range should be from 1 to n.
        int n = arr.size() + 1;                 // Total numbers including the missing one
        int total = n * (n + 1) / 2;            // Sum of first n natural numbers: n*(n+1)/2

        // Step 2: Calculate the sum of all numbers present in the array
        int sum = 0;
        for (int num : arr)                     // For each element in array 'arr', copy the value to 'num'
        {
            sum += num;                         // Add the value to our cumulative sum
        }

        // Step 3: The missing number is the difference between the expected total and the actual sum
        return total - sum;
    }
};

int main()
{
    // Create an instance of the Solution class
    Solution num;

    // Input array - contains numbers from 1 to 5, but one number (4) is missing
    std::vector<int> arr = {1, 2, 3, 5};

    // Call the function to find the missing number
    int missing = num.missingNum(arr);

    // Output the result
    std::cout << "Missing number: " << missing << std::endl;

    return 0;
}

/*
==============================
        EDGE CASES
==============================
1. Array has one element → returns the missing number automatically.
   e.g., [1] → missing number = 2
2. Missing number is at the start → [2, 3, 4, 5] → returns 1
3. Missing number is at the end → [1, 2, 3, 4] → returns 5
4. Works correctly for large arrays as well due to use of long integer arithmetic logic.
==============================
*/
