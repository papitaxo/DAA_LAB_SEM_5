# EXPERIMENT - 11

## Aim
Write a program to find the minimum cost spanning tree using Kruskal's algorithm.

## Algorithm
1. Start.
2. Define `Edge` structure and sort all edges in non-decreasing order of weight.
3. Initialize `parent` array for Disjoint Set Union (DSU) where each vertex is its own parent.
4. Iterate through sorted edges:
   - Find the set representatives of endpoints `u` and `v` using `findParent`.
   - If `u != v`, include the edge in MST, union the sets, add weight to `totalCost`, and increment `count`.
5. Check if `count == n - 1`. If true, print total cost; otherwise print "Spanning tree not possible".
6. End.

## Sample Output
```text
Enter number of vertices and edges: 4 5
Enter edges (u v weight), vertices numbered 0 to 3:
0 1 10
0 2 6
0 3 5
1 3 15
2 3 4
2 - 3 : 4
0 - 3 : 5
0 - 1 : 10
Minimum cost: 19
```
