#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    vector<int> key(n, INT_MAX);
    vector<int> parent(n, -1);
    vector<bool> visited(n, false);
    key[0] = 0;
    int totalCost = 0;
    for (int count = 0; count < n; count++) {
        int u = -1;
        for (int i = 0; i < n; i++) {
            if (!visited[i] && (u == -1 || key[i] < key[u])) {
                u = i;
            }
        }
        if (u == -1 || key[u] == INT_MAX) {
            cout << "Spanning tree not possible\n";
            return 0;
        }
        visited[u] = true;
        if (parent[u] != -1) {
            cout << parent[u] << " - " << u << ": " << graph[u][parent[u]] << endl;
            totalCost += graph[u][parent[u]];
        }
        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] > 0 && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }
    cout << "Minimum cost: " << totalCost << endl;
    return 0;
}
