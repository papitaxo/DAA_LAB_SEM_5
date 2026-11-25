#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n, ans = INT_MAX;
vector<vector<int>> cost;
vector<bool> visited;

void tsp(int city, int count, int total, int start) {
    if (count == n) {
        if (cost[city][start] != 0)
            ans = min(ans, total + cost[city][start]);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!visited[i] && cost[city][i] != 0) {
            visited[i] = true;
            tsp(i, count + 1, total + cost[city][i], start);
            visited[i] = false;
        }
    }
}

int main() {
    cout << "Enter number of cities: ";
    cin >> n;
    cost.resize(n, vector<int>(n));
    visited.resize(n, false);
    cout << "Enter cost matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> cost[i][j];
    visited[0] = true;
    tsp(0, 1, 0, 0);
    if (ans == INT_MAX)
        cout << "No tour possible\n";
    else
        cout << "Minimum cost: " << ans << "\n";
    return 0;
}
