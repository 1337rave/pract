#include <iostream>

int main() {
    double num1, num2, result;
    double* ptrNum1 = &num1, * ptrNum2 = &num2, * ptrResult = &result;
    char op;

    std::cout << "Enter an expression (e.g., 2 + 3): ";
    std::cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
        *ptrResult = *ptrNum1 + *ptrNum2;
        break;
    case '-':
        *ptrResult = *ptrNum1 - *ptrNum2;
        break;
    case '*':
        *ptrResult = *ptrNum1 * *ptrNum2;
        break;
    case '/':
        *ptrResult = *ptrNum1 / *ptrNum2;
        break;
    default:
        std::cout << "Invalid operator." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "Result: " << *ptrResult << std::endl;

    return 0;
}
