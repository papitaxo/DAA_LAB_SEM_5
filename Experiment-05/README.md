# EXPERIMENT - 05

## Aim
Write a program for Quick Sort.

## Algorithm

### Algorithm for QuickSort
1. Start the function `quickSort(arr, low, high)`.
2. If `low < high`, proceed with the sorting.
3. Call the `partition(arr, low, high)` function to get the partition index `pi`.
4. Recursively call `quickSort(arr, low, pi - 1)` to sort the elements before the partition.
5. Recursively call `quickSort(arr, pi + 1, high)` to sort the elements after the partition.
6. End.

### Algorithm for Partition
7. Select the last element as the pivot: `pivot = arr[high]`.
8. Initialize an index `i = low - 1` to keep track of the smaller elements.
9. Loop `j` from `low` to `high - 1`:
   - If `arr[j] <= pivot`, increment `i` by 1 and swap `arr[i]` with `arr[j]`.
10. After the loop, swap the pivot element `arr[high]` with the element at `arr[i + 1]` to place the pivot in its correct sorted position.
11. Return the partition index `i + 1`.

## Sample Output
```text
Sorted array: 10 15 20 30 40 70 80
```
