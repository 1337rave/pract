#include <iostream>

int main() {
    int a, b;
    int* ptrA = &a, * ptrB = &b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int max = (*ptrA > *ptrB) ? *ptrA : *ptrB;

    std::cout << "The larger number is: " << max << std::endl;

    return 0;
}
