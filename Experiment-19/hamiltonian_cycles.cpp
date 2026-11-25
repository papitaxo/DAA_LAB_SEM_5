#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> graph;
vector<int> path;
int countCycles = 0;

bool isSafe(int v, int pos) {
    if (graph[path[pos - 1]][v] == 0)
        return false;
    for (int i = 0; i < pos; i++) {
        if (path[i] == v)
            return false;
    }
    return true;
}

void hamiltonian(int pos) {
    if (pos == n) {
        if (graph[path[pos - 1]][path[0]] == 1) {
            countCycles++;
            for (int i = 0; i < n; i++)
                cout << path[i] << " ";
            cout << path[0] << endl;
        }
        return;
    }
    for (int v = 1; v < n; v++) {
        if (isSafe(v, pos)) {
            path[pos] = v;
            hamiltonian(pos + 1);
            path[pos] = -1;
        }
    }
}

int main() {
    cout << "Enter number of vertices: ";
    cin >> n;
    graph.resize(n, vector<int>(n));
    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    path.assign(n, -1);
    path[0] = 0;
    cout << "Hamiltonian cycles:\n";
    hamiltonian(1);
    if (countCycles == 0)
        cout << "No Hamiltonian cycle exists\n";
    return 0;
}
