#include <iostream>

int main() {
    int a, b;
    int* ptrA = &a, * ptrB = &b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
