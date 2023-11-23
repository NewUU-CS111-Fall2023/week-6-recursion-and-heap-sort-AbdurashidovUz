#include <iostream>

bool isPrime(int n, int divisor) {
    if (divisor == 1) {
        return true;
    }
    
    if (n % divisor == 0) {
        return false;
    }
    
    return isPrime(n, divisor - 1);
}

std::string checkPrime(int n) {
    if (n <= 1) {
        return "NO";
    }
    
    if (isPrime(n, n - 1)) {
        return "YES";
    }
    
    return "NO";
}

int main() {
    int n;
    std::cout << "Enter a natural number greater than 1: ";
    std::cin >> n;
    
    std::string result = checkPrime(n);
    std::cout << result << std::endl;
    
    return 0;
}