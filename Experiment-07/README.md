# EXPERIMENT - 07

## Aim
Write a program for Counting Sort.

## Algorithm
1. Start.
2. If the array is empty, return immediately.
3. Find the maximum value (`maxVal`) and minimum value (`minVal`) in the input array.
4. Calculate the range of the elements: `range = maxVal - minVal + 1`.
5. Create a count array of size `range`, initialized to `0`.
6. Create an output array of the same size as the input array.
7. **Store Frequencies**: Loop through the input array. For each element `num`, increment its frequency in the count array: `count[num - minVal]++`.
8. **Cumulative Count**: Loop through the count array from `1` to `range-1` and update it to store cumulative sums: `count[i] += count[i-1]`. (This determines the exact positions of elements).
9. **Build Output**: Loop through the input array in reverse order (to maintain sorting stability):
   - Find the element's target position using the count array: `positionIndex = count[arr[i] - minVal] - 1`.
   - Place the element into `output[positionIndex]`.
   - Decrement the count: `count[arr[i] - minVal]--`.
10. Copy the elements from the output array back into the original array.
11. End.

## Sample Output
```text
Sorted array: 1 2 2 3 3 4 8
```
