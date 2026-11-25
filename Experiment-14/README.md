# EXPERIMENT - 14

## Aim
To sort a given set of n integer elements using Merge Sort, calculate its execution time for different values of (n>5000), and analyse its best, average and worst-case time complexity.

## Algorithm
1. Start.
2. Read the number of elements `n`, where `n > 5000`.
3. Generate `n` random integer elements.
4. Record the starting time.
5. Call `mergeSort(A, 0, n-1)`.
6. Divide the array into two halves recursively.
7. Sort both halves independently.
8. Merge the sorted halves.
9. Record the ending time.
10. Calculate and display the execution time.
11. Repeat for different values of `n`.
12. Stop.

## Sample Output
```text
Enter array size (>5000): 6000
Sorted array successfully
Execution time: 3955 microseconds
```
