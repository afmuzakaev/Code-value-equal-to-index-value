#include <iostream>
#include <vector>

std::vector<int> findMatchingElements(const std::vector<int>& arr) {
    std::vector<int> matchingIndices;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == i + 1) {
            matchingIndices.push_back(i + 1);
        }
    }

    return matchingIndices;
}

int main() {
    int N;
    std::cout << "Enter the number of elements: ";
    std::cin >> N;

    std::vector<int> arr(N);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    std::vector<int> matchingIndices = findMatchingElements(arr);

    if (matchingIndices.empty()) {
        std::cout << "No elements matching their indices found." << std::endl;
    } else {
        std::cout << "Elements matching their indices are at positions: ";
        for (int index : matchingIndices) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
