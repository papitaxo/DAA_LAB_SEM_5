# EXPERIMENT - 02

## Aim
Write a program for Insertion Sort.

## Algorithm
1. Start.
2. Loop through the array starting from the second element: `for j = 1 to n-1`.
3. Store the current element in a temporary variable: `temp = arr[j]`.
4. Initialize a pointer for the sorted portion of the array: `i = j - 1`.
5. **Compare and Shift**: While `i >= 0` and the element `arr[i]` is greater than `temp`:
   - Shift the element one position to the right: `arr[i + 1] = arr[i]`.
   - Decrement `i` by 1.
6. **Insert**: Place the `temp` value into its correct sorted position: `arr[i + 1] = temp`.
7. Repeat steps 2-6 until the array is fully sorted.
8. End.

## Sample Output
```text
Enter the Number of elements: 5
Enter the element 1: 12
Enter the element 2: 34
Enter the element 3: 1
Enter the element 4: 90
Enter the element 5: 56
Sorted array is: 1 12 34 56 90
```
