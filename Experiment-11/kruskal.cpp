#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

int parent[1000];

int findParent(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = findParent(parent[x]);
}

int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;
    vector<Edge> edges(m);
    cout << "Enter edges (u v weight), vertices numbered 0 to " << n - 1 << ":\n";
    for (int i = 0; i < m; i++)
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    sort(edges.begin(), edges.end(), compare);
    for (int i = 0; i < n; i++)
        parent[i] = i;
    int totalCost = 0, count = 0;
    for (Edge e : edges) {
        int u = findParent(e.u);
        int v = findParent(e.v);
        if (u != v) {
            parent[u] = v;
            totalCost += e.weight;
            count++;
            cout << e.u << " - " << e.v << " : " << e.weight << "\n";
            if (count == n - 1)
                break;
        }
    }
    if (count != n - 1)
        cout << "Spanning tree not possible\n";
    else
        cout << "Minimum cost: " << totalCost << "\n";
    return 0;
}
