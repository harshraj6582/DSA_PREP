#include <iostream>
using namespace std;

void printSubArray(int arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Recursive_SubArray(int arr[], int size, int i) {
    if (i >= size) {
        return;
    }

    for (int end = i; end < size; end++) {
        printSubArray(arr, i, end);
    }

    Recursive_SubArray(arr, size, i + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    Recursive_SubArray(arr, size, 0);

    return 0;
}
