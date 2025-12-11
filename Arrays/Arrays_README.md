## ARRAYS

<details>
<summary><strong>1. Two - Sum</strong></summary>

**Solution:** [Two-Sum-Solution](TwoSum.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/two-sum/description/)

**Approach:** 

> Use a hashmap to store numbers seen so far.\
> For each number, check if `target - num` is already in the map.

**Pattern:** Hash map

**TIME COMPLEXITY:**  $$O(n)$$ -- loop only once

**SPACE COMPLEXITY:** $$O(n)$$
</details>

<!-- --- -->

<details>
<summary><strong>2. Missing in Array</strong></summary>

**Solution:** [Missing in Array](Missing_in_Array.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** 

> Use the formula for the sum of first n natural numbers: `n(n+1)/2`.\
> Compute the expected total for numbers 1 to n, then subtract the actual sum of the array.\
>  difference is the missing number.

**TIME COMPLEXITY:** $$O(n)$$  

**SPACE COMPLEXITY:** $$O(1)$$     
</details>

<!-- --- -->

<details>
<summary><strong>3. Remove Duplicates</strong></summary>

**Solutions:** [Remove Duplicates](Remove_Duplicates_From_Sorted_Array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

**Approach:** 

> Pointer `i` tracks the position of the last unique element.\
> Pointer `j` scans the array; when `nums[j] != nums[i]`, copy and increment.


**TIME COMPLEXITY:** $$O(n)$$  

**SPACE COMPLEXITY:** $$O(1)$$
</details> 

<!-- --- -->

<details>
<summary><strong>4. Remove Elements</strong></summary>

**Solution:** [Remove Elements](Remove_elements.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/remove-element/)

**Approach:** 

> Create a write pointer 'index' and assign it to 0.\
> Traverse the array and whenever `nums[i] != val`, overwrite `nums[index]` with `nums[i]` and increment index.\
> This compacts all valid elements to the front.\
> Return index as the new length of the modified array.

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>5. Plus One</strong></summary>

**Solution:** [Plus One](Plus_One.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/plus-one/)

**Approach:** 

> Start from the last digit and simulate addition with carry.\
> Add 1 to the last element; if it becomes 10, set it to 0 and carry over to the previous digit.\
> If all digits are 9, insert 1 at the start.

**Pattern:** Simulate Addition

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>6. Second Largest</strong></summary>

**Solution:** [Second Largest](Second_Largest.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** 

> Two variables `firstMax` and `secondMax` are assigned with `INT_MIN` which is the lowest possible value of an `int`.\
> Traverse the array and update `firstMax` whenever a larger value is found.
> When `firstMax` updates, assign its previous value to `secondMax`.
> Otherwise, update `secondMax` if the number is smaller than `firstMax` but larger than `secondMax`.\
> Return `secondMax` (or -1 if it never updated).

**Pattern:** Max Tracking

**TIME COMPLEXITY:** $$O(n)$$ - We traverse the array once, doing constant work each step.

**SPACE COMPLEXITY:** $$O(1)$$     - We only use a fixed number of extra variables (firstMax, secondMax).
</details>

<!-- --- -->

<details>
<summary><strong>7. First Occurrance in a String</strong></summary>

**Solution:** [First Occurance in a String](First_Occurance_in_String.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

**Approach:**

> Move a window of length needle.size() across haystack and check if all characters match.\
> Return the starting index on a full match; otherwise return `-1`.

**Pattern:** Sliding window + brute force string matching

**TIME COMPLEXITY:** $$O(m * n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>8. Array Leaders</strong></summary>

**Solution:** [Array Leaders](Array_Leaders.cpp)

**Platform:** [GeeksforGeeks](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&category=Arrays,CPP&difficulty=Easy&sortBy=submissions)

**Approach:** 
> Traverse the array from right to left while keeping track of the maximum element seen so far.
> Every time an element is ≥ this maximum, it is a “leader.”
> Store these leaders, then reverse the result at the end because we collect them from the right side. 

**PatternL** Reverse Traversal + Running Maximum

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(n)$$
</details>

<!-- --- -->

<details>
<summary><strong>9. Search Insert Position</strong></summary>

**Solution:** [Search Insert Position](Search_Insert_Position.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/search-insert-position/)

**Approach:** 
> Linearly scan the array and return the first index where `nums[i] ≥ target`.\
> If no such position exists, the target should be inserted at the end, so `return n`.

**Pattern:** Linear Search in Sorted Array

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>10. Concatenation of Array</strong></summary>

**Solution:** [Concatenation of Array](Concatenation_of_array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/concatenation-of-array/description/)

**Approach:** 
> Create a new array of size 2 * n.\
> Copy the original array into the first half, and copy it again into the second half.\
> This gives a concatenation of the array with itself.

**Pattern:** Array Construction / Duplicate Fill

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(n)$$
</details>

<!-- --- -->

<details>
<summary><strong>11. Contains Duplicate</strong></summary>

**Solution:** [Contains Duplicate](Contains_Duplicate.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/contains-duplicate/)

**Approach:** 
> Use a hash map to count occurrences of each number while iterating through the array.\
> If any element’s count exceeds 1, return `true`.\
> If the loop finishes with no duplicates found, return `false`.

**Pattern:** Hashing / Frequency Counting

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(n)$$
</details>

<!-- --- -->

<details>
<summary><strong>12. Valid Anagram</strong></summary>

**Solution:** [Valid Anagram](Valid_Anagram.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/valid-anagram/description/)

**Approach:** 
> If the strings differ in length, return false immediately.\
> Use a hash map to count character frequencies:\
> increment for each character in `s`, and decrement for each character in `t`.\
> If all frequency values end at zero, the strings are anagrams.

**Pattern:** Hash Map Frequency Counting

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>13. Longest Common Prefix</strong></summary>

**Solution:** [Longest Common Prefix](Longest_Common_Prefix.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/longest-common-prefix/)

**Approach:** 
> Use the first string as the initial prefix.\
> Compare it with each subsequent string and shorten the prefix character-by-character until they match.\
> If the prefix becomes empty at any point, return an empty string.

**TIME COMPLEXITY:** $$O(n.m)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>14. Best Time to Buy and Sell stock</strong></summary>

**Solution:** [Best Time To Buy and Sell stock](bestTimeToBuyAndSellStock.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

**Approach:** 

> Scan the array once while tracking:/
>   minPrice = lowest price seen so far (best buy)/
>   maxProfit = maximum profit so far
> For each price:/
> Update minPrice = min(minPrice, price)/
> Compute profit = price - minPrice
> Update maxProfit = max(maxProfit, profit)./
> Return maxProfit.

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>15. Move Zeroes</strong></summary>

**Solution:** [Move Zeroes](Move_Zeroes.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/move-zeroes/)

**Approach:**

> Use `insertPos` to track where the next non-zero should go./
> Loop through the array: whenever you see a non-zero, write it at `insertPos` and increment `insertPos`./
> After placing all non-zero elements, fill the remaining positions with 0s.

**Pattern:** Two-Pointers

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>16. Maximum Subarray</strong></summary>

**Solution:** [Maximum Subarray](Maximum_Subarray.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/maximum-subarray/description/)

**Approach:**

> Use Kadane’s Algorith>\
> Maintain a running sum `current_max` of the current subarra>\
> For each element, choose the better option\
> Start new `nums[i]` or extend previous `current_max + nums[i]>\
> Track the best sum in `actual_max`.

**Pattern:** Dynamic Programming (Kadane) / Running Subarray Sum

**TIME COMPLEXITY:** $$O(n)$$

**SPACE COMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>17. 3Sum</strong></summary>

**Solution:** [3Sum](3_Sum.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/3sum/description/)

**Approach:** 

> Sort the array, fix each number `i`, and use two pointers (`left`, `right`) to find pairs that sum with `i` to zero. \
> If sum < 0 - move `left++`; \if sum > 0 - `right--`; \if sum == 0 - record triplet and skip duplicate. \
> Skip duplicate values for both `i` and the pointer positions to avoid repeated triplets.

**Pattern:** Two Pointers + Sorting + Duplicate Skipping

**TIME COMPLEXITY:** O(n<sup>2</sup>)

**SPACE SOMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>18. Subarray Sum Equals K</strong></summary>

**Solution:** [Subarray Sum Equals K](Subarray_Sum_Equals_K.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/description/)

**Approach:**

> Use a running prefix sum and a hash map to store how many times each prefix sum has appeared.\
> For each index, if `(prefix - k)` exists in the map, it means a subarray ending here sums to `k`; add its frequency to the answer.\
> Then record the current prefix sum in the  map.

**Pattern:** Prefix Sum + Hash Map (Frequency Counting)

**TIME COMPLEXITY:** $$O(n)$$

**SPACE SOMPLEXITY:** $$O(n)$$
</details>

<!-- --- -->

<details>
<summary><strong>19. Product of Array Except Self</strong></summary>

**Solution:** [Product of Array Except Self](Product_of_Array_Except_Self.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/product-of-array-except-self/)

**Approach:** 

> Use two passes to compute the product of all elements except the current index <strong>without using division</strong>.\
> First pass fills each position with the prefix product (product of all elements to its left).\
> Second pass multiplies each position by the suffix product (product of all elements to its right).\
> This gives the final result in O(n) time with O(1) extra space.

**Pattern:** Prefix + Suffix Product Technique
>(Also known as bidirectional cumulative product.)

**TIME COMPLEXITY:** $$O(n)$$

**SPACE SOMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>20. Rotate Array</strong></summary>

**Solution:** [Roate Array](Roate_Array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/rotate-array/)

**Approach:** 

> Normalize `k` using `k %= n`, then reverse the whole array.\
> Next, reverse the first `k` elements, and finally reverse the remaining `n - k` elements.\
> These three reversals rotate the array to the right by `k` steps in-place.

**Pattern:** Interval Merging / Sorting + Linear Scan

**TIME COMPLEXITY:** $$O(nlogn)$$

**SPACE SOMPLEXITY:** $$O(n)$$
</details>

<!-- --- -->

<details>
<summary><strong>21. Merge Intervals</strong></summary>

**Solution:** [Merge Intervals](Merge_Intervals.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/merge-intervals/description/)

**Approach:** 

> Sort the intervals by their start time.\
> Initialize the result with the first interval, then iterate through the rest:\
>  - If the current interval overlaps with the last merged interval, update the end time.\
>  - Otherwise, push the current interval as a new non-overlapping interval.

**Pattern:** In-Place Array Reversal Technique

**TIME COMPLEXITY:** $$O(n)$$

**SPACE SOMPLEXITY:** $$O(1)$$
</details>

<!-- --- -->

<details>
<summary><strong>21. Merge Sorted Array</strong></summary>

**Solution:** [Merge Sorted Array](Merge_Sorted_Array.cpp)

**Platform:** [LeetCode](https://leetcode.com/problems/merge-intervals/description/)

**Approach:** 
> Use three pointers starting from the end of each list:
> `i` at the last valid element of `nums1`, `j` at the end of `nums2`, and `k` at the last index of the merged array space.
> Compare elements from the back and fill `nums1[k]` with the larger one, moving pointers accordingly.
> If any elements remain in `nums2`, copy them to the front of `nums1`.


**Pattern:** Two-Pointer Merge (Reverse Merge Technique)

**TIME COMPLEXITY:** $$O(m + n)$$

**SPACE SOMPLEXITY:** $$O(1)$$
</details>