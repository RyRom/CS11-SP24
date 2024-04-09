#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> num1 >> num2;

    const int ORIGINAL1 = num1;
    const int ORIGINAL2 = num2;

    std::cout << "Swapping...\n\nPass-by-value: ";
    std::cout << "\nPass-by-reference: ";
    std::cout << "\nPointer parameters: ";

    std::cout << std::endl;

    return 0;
}