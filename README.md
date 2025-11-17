# DSA PRACTICE IN C++

This repo contains various DSA problems solved from different platforms like LeetCode, GfG, etc. with structured and super-beginner-friendly documentation. I DO NOT solve these questions on my own. I try for some time (probably hours), check hints, use AI, etc. But what's important is that I understand them. After all, I'm still a beginner.

My preferred language: C++


---


**PROBLEMS SOLVED:**

[Arrays](https://github.com/Aditya-354/Interesting-DSA-Problems/tree/main/Arrays) : *13*


## Arrays

[Arrays](https://github.com/Aditya-354/Interesting-DSA-Problems/tree/main/Arrays) are ADTs (Abstract Data Types)

<details>
<summary><strong>**1.** [LC-1: Two - Sum](https://github.com/Aditya-354/Interesting-DSA-Problems/blob/main/Arrays/TwoSum.cpp)</strong></summary>

**Platform:** [LeetCode](https://leetcode.com/problems/two-sum/description/)

**Approach:** 

-> Use a hashmap to store numbers seen so far.
-> For each number, check if `target - num` is already in the map.

**Pattern:** Hash map

**TIME COMPLEXITY:**  $$O(n)$$ -- loop only once

**SPACE COMPLEXITY:** $$O(n)$$
</details>


**2.** [Missing in Array](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Missing_in_Array.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** 

-> Use the formula for the sum of first n natural numbers: `n(n+1)/2`.
-> Compute the expected total for numbers 1 to n, then subtract the actual sum of the array.
->  difference is the missing number.

**TIME COMPLEXITY:** $$O(n)$$  

**SPACE COMPLEXITY:** $$O(1)$$     



**3.** [Remove Duplicates](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Remove_Duplicates_From_Sorted_Array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

**Approach:** 

-> Pointer `i` tracks the position of the last unique element.
-> Pointer `j` scans the array; when `nums[j] != nums[i]`, copy and increment.

**TIME COMPLEXITY:** $$O(n)$$  

**SPACE COMPLEXITY:** $$O(1)$$ 



**4.** [Remove Elements](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Remove_elements.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-element/)

**Approach:** 

-> Create a write pointer 'index' and assign it to 0.
-> Traverse the array and whenever `nums[i] != val`, overwrite `nums[index]` with `nums[i]` and increment index.
-> This compacts all valid elements to the front.
-> Return index as the new length of the modified array.

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$



**5.** [Plus One](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Plus_One.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/plus-one/)

**Approach:** 

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$



**6.** [Second Largest](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Second_Largest.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** 

**TIME COMPLEXITY:** $$O(n)$$ - We traverse the array once, doing constant work each step.

**SPACE COMPLEXITY:** $$O(1)$$     - We only use a fixed number of extra variables (firstMax, secondMax).



**7.** [First Occurrance in a String](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/First_Occurance_in_String.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

**Approach:** Two Pointers, string matching

**TIME COMPLEXITY:** $$O(m * n)$$

**SPACE COMPLEXITY:** $$O(1)$$



**8.** [Array Leaders](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Array_Leaders.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** searching

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$



**9.** [Search Insert Position](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Search_Insert_Position.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/search-insert-position/)

**Approach:** searching

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$



**10.** [Concatenation of Array](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Concatenation_of_array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/concatenation-of-array/description/)

**Approach:** Array traversal & insertion

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(n)$$



**11.** [Contains Duplicate](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Contains_Duplicate.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/contains-duplicate/)

**Approach:** Searching if the duplicate of an element occurs at least once using hash maps 

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(n)$$



**12.** [Valid Anagram](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Valid_Anagram.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/valid-anagram/description/)

**Approach:** Using hash maps to store and check anagram

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$




**13.** [Longest Common Prefix](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Longest_Common_Prefix.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/longest-common-prefix/)

**Approach:** Array traversal and string operations to find the longest common prefix

**TIME COMPLEXITY:** $$O(s)$$

**SPACE COMPLEXITY:** $$O(1)$$