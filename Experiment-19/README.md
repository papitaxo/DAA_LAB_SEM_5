# EXPERIMENT - 19

## Aim
To find all Hamiltonian Cycles in a connected undirected graph of n vertices using the Backtracking principle.

## Algorithm
1. Start.
2. Read the number of vertices and adjacency matrix.
3. Initialize all positions in the path to `-1` and fix vertex 0 as starting vertex.
4. If all vertices are included, check if edge exists back to vertex 0. If yes, display cycle.
5. Otherwise, try every vertex `v`: check if adjacent to previous vertex and not yet in path. If valid, add to path, recursively call, and backtrack.
6. Stop.

## Sample Output
```text
Enter number of vertices: 5
Enter adjacency matrix:
0 1 0 1 0
1 0 1 1 1
0 1 0 0 1
1 1 0 0 1
0 1 1 1 0
Hamiltonian cycles:
0 1 2 4 3 0
0 3 4 2 1 0
```
