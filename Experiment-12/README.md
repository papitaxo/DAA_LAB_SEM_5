# EXPERIMENT - 12

## Aim
Write a Program to implement N Queen Problem using Backtracking.

## Algorithm
1. Start.
2. Read the number of queens `n`.
3. Define `isSafe(board, row, col)` to check if placing a queen at `(row, col)` conflicts with previously placed queens.
4. Define `solveNQueen(board, row)`:
   - If `row == n`, return true (all queens placed).
   - For each `col` from `0` to `n-1`: if `isSafe` is true, set `board[row] = col` and recursively call `solveNQueen` for next row.
   - If recursive call returns true, return true. Otherwise backtrack by setting `board[row] = -1`.
5. If a solution exists, print the board configuration; otherwise print "No solution exists".
6. End.

## Sample Output
```text
Enter number of queens: 4
Solution:
. Q . . 
. . . Q 
Q . . . 
. . Q . 
```
