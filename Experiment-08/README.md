# EXPERIMENT - 08

## Aim
Write a program for Heap Sort.

## Algorithm

### Algorithm for HeapSort
1. Start. Let `n` be the size of the array.
2. **Build Max-Heap**: Loop `i` from `(n / 2) - 1` down to `0`. Call `heapify(arr, n, i)` on each node. This rearranges the array into a valid Max-Heap.
3. **Extract Elements**: Loop `i` from `n - 1` down to `1`:
   - Swap the root (maximum element, `arr[0]`) with the last element in the current heap (`arr[i]`).
   - Call `heapify(arr, i, 0)` on the reduced heap to restore the Max-Heap property for the remaining elements.
4. Repeat until the array is fully sorted.
5. End.

### Algorithm for Heapify
6. Initialize `largest` as the root index `i`.
7. Calculate the indices of the left child (`left = 2 * i + 1`) and right child (`right = 2 * i + 2`).
8. If left is within heap boundaries (`left < n`) and `arr[left] > arr[largest]`, update `largest = left`.
9. If right is within heap boundaries (`right < n`) and `arr[right] > arr[largest]`, update `largest = right`.
10. If `largest` is not equal to `i` (meaning the root is not the largest):
    - Swap `arr[i]` with `arr[largest]`.
    - Recursively call `heapify(arr, n, largest)` on the affected sub-tree to ensure it remains a valid Max-Heap.

## Sample Output
```text
Sorted array: 5 6 7 11 12 13
```
