#include <iostream>

void printNumbers(int A, int B) {
    if (A == B) {
        std::cout << A << std::endl;
        return;
    }

    if (A < B) {
        std::cout << A << std::endl;
        printNumbers(A + 1, B);
    } else {
        std::cout << A << std::endl;
        printNumbers(A - 1, B);
    }
}

int main() {
    int A, B;
    std::cin >> A;
    std::cin >> B;

    printNumbers(A, B);

    return 0;
}

//Time complexcity of this is O(n)