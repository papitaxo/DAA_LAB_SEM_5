# EXPERIMENT - 04

## Aim
Write a program for Selection Sort.

## Algorithm
1. Start.
2. Run an outer loop `i` from `0` to `n-2` to set the boundary of the sorted portion.
3. Assume the element at index `i` is the minimum. Set `minIndex = i`.
4. **Find Minimum**: Run an inner loop `j` from `i+1` to `n-1`:
   - If `arr[j] < arr[minIndex]`, update `minIndex = j`.
5. After the inner loop completes, check if `minIndex` is different from `i`.
6. **Swap**: If they are different, swap the element at `arr[i]` with the element at `arr[minIndex]`.
7. Repeat until the outer loop completes.
8. End.

## Sample Output
```text
Sorted array: 11 12 22 25 64
```
