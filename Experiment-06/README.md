# EXPERIMENT - 06

## Aim
Write a program for Merge Sort.

## Algorithm

### Algorithm for MergeSort
1. Start the function `mergeSort(arr, left, right)`.
2. If `left < right`, calculate the middle index: `mid = left + (right - left) / 2`.
3. Recursively call `mergeSort(arr, left, mid)` to sort the first half.
4. Recursively call `mergeSort(arr, mid + 1, right)` to sort the second half.
5. Call the `merge(arr, left, mid, right)` function to combine the sorted halves.
6. End.

### Algorithm for Merge
7. Calculate the sizes of the two subarrays: `n1 = mid - left + 1` and `n2 = right - mid`.
8. Create temporary arrays `leftArr` and `rightArr`, and copy the data from the main array into them.
9. Initialize pointers for the arrays: `i = 0` (leftArr), `j = 0` (rightArr), and `k = left` (merged array).
10. **Compare and Merge**: While `i < n1` and `j < n2`:
    - If `leftArr[i] <= rightArr[j]`, place `leftArr[i]` into `arr[k]` and increment `i`.
    - Else, place `rightArr[j]` into `arr[k]` and increment `j`.
    - Increment `k`.
11. **Copy Remaining**: Copy any remaining elements of `leftArr` into `arr` (if any).
12. Copy any remaining elements of `rightArr` into `arr` (if any).

## Sample Output
```text
Sorted array: 3 9 10 27 38 43 82
```
