# EXPERIMENT - 13

## Aim
To sort an input unsorted array using Merge Sort, calculate its execution time for different values of (n>5000), and analyse its best, average and worst-case time complexity.

## Algorithm
1. Start.
2. If `low < high`, calculate the middle index: `mid = (low + high) / 2`.
3. Recursively apply Merge Sort to the left half.
4. Recursively apply Merge Sort to the right half.
5. Merge both sorted halves into a single sorted array.
6. Repeat until the entire array is sorted.
7. Generate arrays of different sizes greater than 5000 (`6000, 10000, 15000, 20000, 25000`).
8. Record the execution time for each input size using `std::chrono::high_resolution_clock`.
9. Display the input size and execution time.
10. Stop.

## Sample Output
```text
Size	Time (microseconds)
6000	4065
10000	7128
15000	10907
20000	16649
25000	18215
```
