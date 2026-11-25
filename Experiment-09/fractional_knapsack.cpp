#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int value, weight;
};

bool compare(Item a, Item b) {
    return (double)a.value / a.weight > (double)b.value / b.weight;
}

int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;
    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter value and weight: ";
        cin >> items[i].value >> items[i].weight;
    }
    cout << "Enter knapsack capacity: ";
    cin >> capacity;
    sort(items.begin(), items.end(), compare);
    double profit = 0;
    for (int i = 0; i < n && capacity > 0; i++) {
        if (items[i].weight <= capacity) {
            profit += items[i].value;
            capacity -= items[i].weight;
        } else {
            profit += (double)items[i].value * capacity / items[i].weight;
            capacity = 0;
        }
    }
    cout << "Maximum profit: " << profit << "\n";
    return 0;
}
