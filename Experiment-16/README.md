# EXPERIMENT - 16

## Aim
To find the shortest paths from a given source vertex to all other vertices in a weighted connected graph using Dijkstra's algorithm.

## Algorithm
1. Start.
2. Read the number of vertices and adjacency matrix.
3. Read the source vertex.
4. Initialize the distance of every vertex to infinity (`INT_MAX`).
5. Set the distance of the source vertex to zero.
6. Initialize all vertices as unvisited.
7. Repeat `n-1` times: select the unvisited vertex having minimum distance, mark it visited, and update distances of its adjacent unvisited vertices.
8. Display the shortest distance from the source to every vertex.
9. Stop.

## Sample Output
```text
Enter number of vertices: 5
Enter adjacency matrix:
0 4 0 0 8
4 0 8 0 11
0 8 0 7 0
0 0 7 0 9
8 11 0 9 0
Enter source vertex: 0

Shortest distances from source 0:
0 -> 0 : 0
0 -> 1 : 4
0 -> 2 : 12
0 -> 3 : 17
0 -> 4 : 8
```
