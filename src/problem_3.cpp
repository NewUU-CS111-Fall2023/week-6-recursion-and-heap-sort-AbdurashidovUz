#include <iostream>

int sumOfDigits(int N) {
    if (N < 10) {
        return N;
    }
    return N % 10 + sumOfDigits(N / 10);
}

int main() {
    int N;
    std::cout << "Enter a natural number: ";
    std::cin >> N;

    int sum = sumOfDigits(N);
    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
//Time complexcity is O(logn)