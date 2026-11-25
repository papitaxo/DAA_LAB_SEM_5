# EXPERIMENT - 18

## Aim
To find all subsets of a given set of positive integers whose sum is equal to a given positive integer d, using Backtracking.

## Algorithm
1. Start.
2. Read the number of elements and the set of positive integers.
3. Read the target sum `d`.
4. Initialize an empty subset.
5. If the current sum equals target, display subset and return.
6. If all elements are processed or current sum exceeds target, return.
7. Include current element in subset, recursively call with updated sum, remove element (backtrack), and recursively call without current element.
8. Stop.

## Sample Output
```text
Enter number of elements: 5
Enter elements: 10 7 5 18 12
Enter target sum: 30
Subsets with given sum:
{ 7 5 18 }
{ 18 12 }
```
