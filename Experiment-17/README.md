# EXPERIMENT - 17

## Aim
To find the Minimum Cost Spanning Tree of a given undirected graph using Prim's algorithm.

## Algorithm
1. Start.
2. Read the number of vertices and adjacency matrix.
3. Initialize all key values to infinity and parent values to `-1`.
4. Mark all vertices as unvisited and set key value of starting vertex to `0`.
5. Repeat until all vertices are visited: select unvisited vertex with min key value, mark it visited, add edge to MST, and update key values of adjacent unvisited vertices.
6. Display all selected edges and the total minimum cost.
7. Stop.

## Sample Output
```text
Enter number of vertices: 5
Enter adjacency matrix:
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0
0 - 1: 2
1 - 2: 3
1 - 4: 5
0 - 3: 6
Minimum cost: 16
```
