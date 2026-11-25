#include <iostream>
#include <vector>
using namespace std;

void subsetSum(vector<int>& a, vector<int>& subset, int index, int sum, int target) {
    if (sum == target) {
        cout << "{ ";
        for (int x : subset)
            cout << x << " ";
        cout << "}\n";
        return;
    }
    if (index == a.size() || sum > target) return;
    subset.push_back(a[index]);
    subsetSum(a, subset, index + 1, sum + a[index], target);
    subset.pop_back();
    subsetSum(a, subset, index + 1, sum, target);
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Enter target sum: ";
    cin >> target;
    vector<int> subset;
    cout << "Subsets with given sum:\n";
    subsetSum(a, subset, 0, 0, target);
    return 0;
}
