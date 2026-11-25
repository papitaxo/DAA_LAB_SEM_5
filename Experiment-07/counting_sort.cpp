#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& arr) {
    if (arr.empty()) return;
    int maxVal = *std::max_element(arr.begin(), arr.end());
    int minVal = *std::min_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;
    std::vector<int> count(range, 0);
    std::vector<int> output(arr.size());
    for (int num : arr) {
        count[num - minVal]++;
    }
    for (int i = 1; i < range; ++i) {
        count[i] += count[i - 1];
    }
    for (int i = arr.size() - 1; i >= 0; --i) {
        int currentVal = arr[i];
        int positionIndex = count[currentVal - minVal] - 1;
        output[positionIndex] = currentVal;
        count[currentVal - minVal]--;
    }
    arr = output;
}

int main() {
    std::vector<int> data = {4, 2, 2, 8, 3, 3, 1};
    countingSort(data);
    std::cout << "Sorted array: ";
    for (int val : data) {
        std::cout << val << " ";
    }
    std::cout << "
";
    return 0;
}
