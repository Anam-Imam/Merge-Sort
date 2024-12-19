#include <iostream>

// Function to swap two numbers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: \n";
    printArray(arr, n);

    bubbleSort(arr, n);

    std::cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
