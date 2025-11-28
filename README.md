# DSA PRACTICE IN C++

This repo contains various DSA problems solved from different platforms like LeetCode, GfG, etc. with structured and super-beginner-friendly documentation. I DO NOT solve these questions on my own. I try for some time (probably hours), check hints, use AI, etc. But what's important is that I understand them. After all, I'm still a beginner.

My preferred language: C++


---


**PROBLEMS SOLVED:**

[Arrays](https://github.com/Aditya-354/Interesting-DSA-Problems/tree/main/Arrays) : <strong>18</strong>


## Arrays

[Arrays](https://github.com/Aditya-354/Interesting-DSA-Problems/tree/main/Arrays) are ADTs (Abstract Data Types)

<details>
<summary><strong>1. LC-1: Two - Sum</strong></summary>

**Solution:** [Two-Sum-Solution](https://github.com/Aditya-354/Interesting-DSA-Problems/blob/main/Arrays/TwoSum.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/two-sum/description/)

**Approach:** 

-> Use a hashmap to store numbers seen so far.

-> For each number, check if `target - num` is already in the map.

**Pattern:** Hash map

**TIME COMPLEXITY:**  $$O(n)$$ -- loop only once

**SPACE COMPLEXITY:** $$O(n)$$
</details>

<!-- --- -->

<details>
<summary><strong>2. Missing in Array</strong></summary>

**Solution:** [Missing in Array](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Missing_in_Array.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** 

-> Use the formula for the sum of first n natural numbers: `n(n+1)/2`.

-> Compute the expected total for numbers 1 to n, then subtract the actual sum of the array.

->  difference is the missing number.

**TIME COMPLEXITY:** $$O(n)$$  

**SPACE COMPLEXITY:** $$O(1)$$     
</details>

<!-- --- -->

<details>
<summary><strong>3. Remove Duplicates</strong></summary>

**Solutions:** [Remove Duplicates](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Remove_Duplicates_From_Sorted_Array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

**Approach:** 

-> Pointer `i` tracks the position of the last unique element.

-> Pointer `j` scans the array; when `nums[j] != nums[i]`, copy and increment.

**TIME COMPLEXITY:** $$O(n)$$  

**SPACE COMPLEXITY:** $$O(1)$$
</details> 

<!-- --- -->

<details>
<summary><strong>4. Remove Elemments</strong></summary>

**Solution:** [Remove Elements](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Remove_elements.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-element/)

**Approach:** 

-> Create a write pointer 'index' and assign it to 0.

-> Traverse the array and whenever `nums[i] != val`, overwrite `nums[index]` with `nums[i]` and increment index.

-> This compacts all valid elements to the front.

-> Return index as the new length of the modified array.

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

**5.** [Plus One](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Plus_One.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/plus-one/)

**Approach:** 

-> Start from the last digit and simulate addition with carry

-> Add 1 to the last element; if it becomes 10, set it to 0 and carry over to the previous digit.

-> If all digits are 9, insert 1 at the start.

**Pattern:** Simulate Addition

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$

<!-- --- -->

**6.** [Second Largest](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Second_Largest.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** 

-> Two variables `firstMax` and `secondMax` are assigned with `INT_MIN` which is the lowest possible value of an `int`.

-> Traverse the array and update `firstMax` whenever a larger value is found.  
  When `firstMax` updates, assign its previous value to `secondMax`.  
  Otherwise, update `secondMax` if the number is smaller than `firstMax` but larger than `secondMax`.

→ Return `secondMax` (or -1 if it never updated).

**Pattern:** Max Tracking

**TIME COMPLEXITY:** $$O(n)$$ - We traverse the array once, doing constant work each step.

**SPACE COMPLEXITY:** $$O(1)$$     - We only use a fixed number of extra variables (firstMax, secondMax).

<!-- --- -->

**7.** [First Occurrance in a String](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/First_Occurance_in_String.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

**Approach:**

-> Move a window of length needle.size() across haystack and check if all characters match.

-> Return the starting index on a full match; otherwise return `-1`.

**Pattern:** Sliding window + brute force string matching

**TIME COMPLEXITY:** $$O(m * n)$$

**SPACE COMPLEXITY:** $$O(1)$$

<!-- --- -->

**8.** [Array Leaders](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Array_Leaders.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** searching                               

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$

<!-- --- -->

**9.** [Search Insert Position](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Search_Insert_Position.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/search-insert-position/)

**Approach:** searching

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$

<!-- --- -->

**10.** [Concatenation of Array](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Concatenation_of_array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/concatenation-of-array/description/)

**Approach:** Array traversal & insertion

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(n)$$

<!-- --- -->

**11.** [Contains Duplicate](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Contains_Duplicate.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/contains-duplicate/)

**Approach:** Searching if the duplicate of an element occurs at least once using hash maps 

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(n)$$

<!-- --- -->

**12.** [Valid Anagram](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Valid_Anagram.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/valid-anagram/description/)

**Approach:** Using hash maps to store and check anagram

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$

<!-- --- -->

**13.** [Longest Common Prefix](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Longest_Common_Prefix.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/longest-common-prefix/)

**Approach:** Array traversal and string operations to find the longest common prefix

**TIME COMPLEXITY:** $$O(s)$$

**SPACE COMPLEXITY:** $$O(1)$$

<!-- --- -->

<details>
<summary><strong>14. Best Time to Buy and Sell stock</strong></summary>

**Solution:** [Best Time To Buy and Sell stock](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/bestTimeToBuyAndSellStock.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

**Approach:** 

-> Scan the array once while tracking:

* minPrice = lowest price seen so far (best buy)

* maxProfit = maximum profit so far

-> For each price:

* Update minPrice = min(minPrice, price)

* Compute profit = price - minPrice

-> Update maxProfit = max(maxProfit, profit)

-> Return maxProfit.

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>15. Move Zeroes</strong></summary>

**Solution:** [Move Zeroes](https://github.com/Aditya-354/DSA-Problems-Solved/blob/main/Arrays/Move_Zeroes.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/move-zeroes/)

**Approach:**

-> Use `insertPos` to track where the next non-zero should go.

-> Loop through the array: whenever you see a non-zero, write it at `insertPos` and increment `insertPos`.

-> After placing all non-zero elements, fill the remaining positions with 0s.

**Pattern:** Two-Pointers

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>16. Maximum Subarray</strong></summary>

**Solution:** [Maximum Subarray](Arrays/Maximum_Subarray.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/maximum-subarray/description/)

**Approach:**

-> Use Kadane’s Algorithm:

-> Maintain a running sum `current_max` of the current subarray.

-> For each element, choose the better option:
    > start new `nums[i]` or extend previous `current_max + nums[i]`.

-> Track the best sum in `actual_max`.

**Pattern:** Dynamic Programming (Kadane) / Running Subarray Sum

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>17. 3Sum</strong></summary>

**Solution:** [3Sum](Arrays/3_Sum.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/3sum/description/)

**Approach:** 

-> Sort the array, fix each number `i`, and use two pointers (`left`, `right`) to find pairs that sum with `i` to zero.

-> If sum < 0 - move `left++`; if sum > 0 - `right--`; if sum == 0 - record triplet and skip duplicates.

-> Skip duplicate values for both `i` and the pointer positions to avoid repeated triplets.

**Pattern:** Two Pointers + Sorting + Duplicate Skipping

**TIME COMPLEXITY:** O(n<sup>2</sup>)

**SPACE SOMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>18. Subarray Sum Equals K</strong></summary>

**Solution:** [Subarray Sum Equals K](Array/Subarray_Sum_Equals_K.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/description/)

**Approach:**

-> Use a running prefix sum and a hash map to store how many times each prefix sum has appeared.

->For each index, if `(prefix - k)` exists in the map, it means a subarray ending here sums to `k`; add its frequency to the answer.

-> Then record the current prefix sum in the  map.

**Pattern:** Prefix Sum + Hash Map (Frequency Counting)

**TIME COMPLEXITY:** $$O(n)$$

**SPACE SOMPLEXITY:** $$O(n)$$
</details>