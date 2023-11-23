#include <iostream>

int reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }

    int lastDigit = n % 10;
    reversed = (reversed * 10) + lastDigit;

    return reverseNumber(n / 10, reversed);
}

int getReverseNumber(int n) {
    return reverseNumber(n, 0);
}

int main() {
    int n;
    std::cout << "Enter a number without zeros: ";
    std::cin >> n;

    int reversedNumber = getReverseNumber(n);
    std::cout << "Reversed Number: " << reversedNumber << std::endl;

    return 0;
}

//Time complexcity is O(logn)