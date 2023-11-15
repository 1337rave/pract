#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };
    int* ptrArr = arr;
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += *ptrArr;
        ptrArr++;
    }

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
