#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter numbers (-1 to stop):" << std::endl;

    while (true) {
        std::cin >> num;
        if (num == -1)
            break;
        numbers.push_back(num);
    }

    insertionSort(numbers);

    std::cout << "Sorted numbers:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
