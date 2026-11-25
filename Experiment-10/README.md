# EXPERIMENT - 10

## Aim
Write a program to implement travelling salesperson problem.

## Algorithm
1. Start.
2. Read the number of cities `n` and the cost matrix between cities.
3. Initialize a `visited` array to keep track of visited cities and start at city 0.
4. Define recursive function `tsp(city, count, total, start)`:
   - If `count == n`, check if there is an edge from current city back to start city. Update minimum cost if a valid tour is found.
   - Iterate over all cities `i`, and if city `i` is unvisited and reachable, mark visited, make recursive call, and unmark visited (backtrack).
5. Print the minimum cost tour if possible, else print "No tour possible".
6. End.

## Sample Output
```text
Enter number of cities: 4
Enter cost matrix:
0 10 15 20 10 0 35 25 15 35 0 30 20 25 30 0
Minimum cost: 80
```
