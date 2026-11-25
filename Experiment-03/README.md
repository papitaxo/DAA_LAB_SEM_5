# EXPERIMENT - 03

## Aim
Write a program for Bubble Sort.

## Algorithm
1. Start.
2. Run an outer loop `i` from `0` to `n-1` to represent the number of passes.
3. Run an inner loop `j` from `0` to `n-i-1` to compare adjacent elements in the unsorted portion.
4. **Compare Adjacent Elements**: If the current element `arr[j]` is greater than the next element `arr[j+1]`:
   - Swap the two elements using a temporary variable `temp`.
5. Continue the inner loop. The largest element in the unsorted portion will "bubble" up to its correct position at the end of the array.
6. Repeat until the outer loop completes. The array is now sorted.
7. End.

## Sample Output
```text
Enter number of elements: 5
Enter elements: 13 78 1 99 44
Sorted array: 1 13 44 78 99
```
