# EXPERIMENT - 09

## Aim
Write a program to implement fractional knapsack problem using Greedy strategy.

## Algorithm
1. Start.
2. Define an `Item` structure containing `value` and `weight` attributes.
3. Calculate the value-to-weight ratio for each item.
4. Sort all items in non-increasing order of their value-to-weight ratio.
5. Initialize `total profit = 0` and `current capacity = given capacity`.
6. Iterate through the sorted items:
   - If the item's weight is less than or equal to current capacity, add its full value to profit and reduce capacity by its weight.
   - Otherwise, add the fractional value corresponding to the remaining capacity to profit and set capacity to `0`.
7. Display the maximum profit.
8. End.

## Sample Output
```text
Enter number of items: 5
Enter value and weight: 2 3
Enter value and weight: 7 1
Enter value and weight: 15 8
Enter value and weight: 60 23
Enter value and weight: 15 2
Enter knapsack capacity: 20
Maximum profit: 66.3478
```
