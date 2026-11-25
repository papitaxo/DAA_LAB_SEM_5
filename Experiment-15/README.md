# EXPERIMENT - 15

## Aim
To implement the 0/1 Knapsack Problem using the Dynamic Programming method.

## Algorithm
1. Start.
2. Read the number of items `n`.
3. Read the value and weight of each item.
4. Read the maximum knapsack capacity `W`.
5. Create a DP table of size `(n+1) x (W+1)`.
6. Initialize the first row and first column with zero.
7. For each item `i` from 1 to `n` and for each capacity `w` from 0 to `W`:
   - If `wt[i-1] > w`, `dp[i][w] = dp[i-1][w]`.
   - Otherwise, `dp[i][w] = max(dp[i-1][w], val[i-1] + dp[i-1][w - wt[i-1]])`.
8. Display `dp[n][W]` as the maximum profit.
9. Stop.

## Sample Output
```text
Enter number of items: 5
Enter value and weight of each item:
10 5
15 20
20 21
60 11
70 1
Enter knapsack capacity: 15
Maximum profit: 130
```
