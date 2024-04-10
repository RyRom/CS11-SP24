#include <iostream>

void swapByValue(int a, int b);

void swapByReference(int& a, int& b);

void swapPointers(int* a, int* b);

int main() {
    int num1, num2;
    std::cout << "Enter two integers separated by a space: ";
    std::cin >> num1 >> num2;

    const int ORIGINAL1 = num1;
    const int ORIGINAL2 = num2;

    std::cout << "Swapping...\n\nPass-by-value: ";
    swapByValue(num1, num2);
    std::cout << num1 << " " << num2;

    std::cout << "\nPass-by-reference: ";
    swapByReference(num1, num2);
    std::cout << num1 << " " << num2;
    num1 = ORIGINAL1;
    num2 = ORIGINAL2;

    std::cout << "\nPointer parameters: ";
    // int* pnum1 = &num1;
    // int* pnum2 = &num2;

    swapPointers(&num1, &num2);
    // swapPointers(pnum1, pnum2);
    // std::cout << *pnum1 << " " << *pnum2;

    std::cout << num1 << " " << num2;

    std::cout << std::endl;

    return 0;
}

void swapByValue(int a, int b) {
    int c = a;
    a = b;
    b = c;
}

void swapByReference(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void swapPointers(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}