#include <iostream>

int main() {
    int num;
    int* ptrNum = &num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (*ptrNum > 0)
        std::cout << "The number is positive." << std::endl;
    else if (*ptrNum < 0)
        std::cout << "The number is negative." << std::endl;
    else
        std::cout << "The number is zero." << std::endl;

    return 0;
}
