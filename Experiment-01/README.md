# EXPERIMENT - 01

## Aim
Write a program for Recursive Binary & Linear Search.

## Algorithm

### Algorithm for Recursive Binary Search
1. Start the function `binarySearch(arr, low, high, key)`.
2. **Base Case Check**: If `low > high`, the search space is exhausted, and the element is not present. Return `-1`.
3. **Calculate Midpoint**: Compute the middle index as `mid = low + (high - low) / 2` to prevent potential integer overflow.
4. **Match Found**: If the element at the middle index `arr[mid]` is equal to the `key`, return the index `mid`.
5. **Search Left Half**: If the `key` is less than `arr[mid]`, the element must lie in the lower half of the array. Recursively call `binarySearch(arr, low, mid - 1, key)`.
6. **Search Right Half**: If the `key` is greater than `arr[mid]`, the element must lie in the upper half of the array. Recursively call `binarySearch(arr, mid + 1, high, key)`.
7. End.

### Algorithm for Recursive Linear Search
1. Start the function `linearSearch(arr, n, key, index)`.
2. **Base Case 1 (Not Found)**: If `index >= n`, the end of the array has been reached without finding the key. Return `-1`.
3. **Base Case 2 (Found)**: If the element at the current index (`arr[index]`) is equal to the `key`, return the `index`.
4. **Recursive Step**: If the element does not match, move to the next element by recursively calling `linearSearch(arr, n, key, index + 1)`.
5. End.

## Sample Output

### Binary Search
```text
Enter number of elements: 6
Enter elements in sorted order: 12 13 69 89 99 102
Enter element to search: 89
Element found at index 3
```

### Linear Search
```text
Enter number of elements: 8
Enter elements: 10 17 88 6 9 15 90 1
Enter element to search: 15
Element found at index 5
```
