#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

void merge(vector<int>& a, int l, int mid, int r) {
    vector<int> temp;
    int i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j])
            temp.push_back(a[i++]);
        else
            temp.push_back(a[j++]);
    }
    while (i <= mid)
        temp.push_back(a[i++]);
    while (j <= r)
        temp.push_back(a[j++]);
    for (int k = 0; k < temp.size(); k++)
        a[l + k] = temp[k];
}

void mergeSort(vector<int>& a, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter array size (>5000): ";
    cin >> n;
    if (n <= 5000) {
        cout << "Enter size greater than 5000\n";
        return 0;
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = rand() % 100000;
    auto start = high_resolution_clock::now();
    mergeSort(a, 0, n - 1);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Sorted array successfully\n";
    cout << "Execution time: " << duration.count() << " microseconds\n";
    return 0;
}
