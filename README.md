# DSA PRACTICE IN C++

This repo contains various DSA problems solved from different platforms like LeetCode, GfG, etc. with structured and super-beginner-friendly documentation. I DO NOT solve these questions on my own. I try for some time (probably hours), check hints, use AI, etc. But what's important is that I understand them. After all, I'm still a beginner.

My preferred language: C++


---


**PROBLEMS SOLVED:**

[Arrays](https://github.com/Aditya-354/Interesting-DSA-Problems/tree/main/Arrays) : **$11$**


## Arrays

[Arrays](https://github.com/Aditya-354/Interesting-DSA-Problems/tree/main/Arrays) are ADTs (Abstract Data Types)


**1.** [Two - Sum](https://github.com/Aditya-354/Interesting-DSA-Problems/blob/main/Arrays/TwoSum.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/two-sum/description/)

**Approach:** Hash map (store value already visited to check later on)

**Time Complexity:**  $$O(n)$$ -- loop only once

**Space complexity:** $$O(n)$$



**2.** [Missing in Array](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Missing_in_Array.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** We know that the sum of the first 'n' natural numbers is given by:
        sum = n * (n + 1) / 2

If one number is missing in a list that should contain numbers from 1 to n,
the difference between the expected sum and the actual sum of the array
will give the missing number.

Steps:
1. Calculate 'n' as arr.size() + 1.
2. Compute the total expected sum using the formula.
3. Compute the actual sum of all elements in the array.
4. Return (total - sum), which is the missing number.

Example:
    Input  → [1, 2, 3, 5]
    Expected numbers → [1, 2, 3, 4, 5]
    total = 5 * (5 + 1) / 2 = 15
    sum = 1 + 2 + 3 + 5 = 11
    Missing number = 15 - 11 = 4

**Time Complexity:** $$O(n)$$  - The array is traversed once to calculate the sum.

**Space Complexity:** $$O(1)$$     - Only a few extra variables are used (constant space).



**3.** [Remove Duplicates](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Remove_Duplicates_From_Sorted_Array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

**Approach:** I used the two-pointers method. Using two variables *i*(keeps track of the unique values) and *j*(array traversal through the loop body). I struggled while solving this problem. I hope you do too.

**Time Complexity:** $$O(n)$$

**Space Complexity:** $$O(1)$$



**4.** [Remove Elements](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Remove_elements.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-element/)

**Approach:** Two Pointer method.

**Time Complexity:** $$O(n)$$

**Space Complexity:** $$O(1)$$



**5.** [Plus One](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Plus_One.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/plus-one/)

**Approach:** A two pointer approach where the carry keeps track of the carry from incrementing the digits. If the digit/last digit is 9, it is incremented to 10, and carry becomes 1.

**Time Complexity:** $$O(n)$$

**Space Complexity:** $$O(1)$$



**6.** [Second Largest](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Second_Largest.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** We maintain two variables:
    → firstMax   = largest number so far
    → secondMax  = second largest distinct number so far

Algorithm:
1. Initialize both as INT_MIN.
2. Traverse the array once:
       a. If current number > firstMax:
              secondMax = firstMax
              firstMax = current number
       b. Else if current number < firstMax but > secondMax:
              secondMax = current number
3. After traversal, if secondMax was never updated, return -1.
   Otherwise, return secondMax.

Example:
    Input  → [4, 9, 10, 8, 14, 6]
    Output → 10

**Time Complexity:** $$O(n)$$ - We traverse the array once, doing constant work each step.

**Space Complexity:** $$O(1)$$     - We only use a fixed number of extra variables (firstMax, secondMax).



**7.** [First Occurrance in a String](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/First_Occurance_in_String.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

**Approach:** Two Pointers, string matching

**Time Complexity:** $$O(m * n)$$

**Space Complexity:** $$O(1)$$



**8.** [Array Leaders](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Array_Leaders.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** searching

**Time Complexity:** $$O(n)$$

**Space Complexity:** $$O(1)$$



**9.** [Search Insert Position](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Search_Insert_Position.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/search-insert-position/)

**Approach:** searching

**Time Complexity:** $$O(n)$$

**Space Complexity:** $$O(1)$$



**10.** [Concatenation of Array](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Concatenation_of_array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/concatenation-of-array/description/)

**Approach:** Array traversal & insertion

**Time Complexity:** $$O(n)$$

**Space Complexity:** $$O(n)$$



**11.** [Contains Duplicate](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Contains_Duplicate.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/contains-duplicate/)

**Approach:** Array traversal & insertion

**Time Complexity:** $$O(n)$$

**Space Complexity:** $$O(n)$$