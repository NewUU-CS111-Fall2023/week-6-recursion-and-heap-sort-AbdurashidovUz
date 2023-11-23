#include <iostream>

void print_numbers(int A, int B) {

    // Ascending order
    if (A < B) {
        for (int i = A; i <= B; ++i) {
            std::cout << i << " ";
        }
    }
        // Descending order
    else {
        for (int i = A; i >= B; --i) {
            std::cout << i << " ";
        }
    }
}

int main() {
    int A, B;
    std::cin >> A >> B;
    print_numbers(A, B);

    return 0;
}

// Time Complexcity is O(n)