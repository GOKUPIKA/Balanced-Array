# Balanced-Array HackerRank Question

**// QUESTION:**

Given an array of numbers, fidn the index of the smallest array element (the pivot), for which the sums of all elements to the left and to the right are equal. The array may not be reordered.

// EXAMPLE:

arr = [1,2,3,4,6]
* The sum of the first three elements 1+2+3=6. The value of the last element is 6.
* Using zero based indexing, arr[3]=4 is the pivot between the two subarrays.
* The index of the pivot is 3.

// CONSTRAINTS:

* 3 ≤ n ≤ 10^5
* 1 ≤ arr[i] ≤ 2 x 10^4, where 0 ≤ i ≤ n

// SAMPLE INPUT

TEST CASE 0:
Input: arr[], size n=4
       arr=[1,2,3,3]

Output: 2

TEST CASE 1:
Input: arr[], size n=5
       arr=[1,2,3,4,6]

Output: 3
