#include <iostream>

bool is_power_of_two(int N) {

    if (N == 1) {
        return true;
    }

    else if (N % 2 != 0 || N < 1) {
        return false;
    } else {

        return is_power_of_two(N / 2);
    }
}

int main() {

    int N;
    std::cin >> N;
    bool result = is_power_of_two(N);
    std::cout << (result ? "YES" : "NO");

    return 0;
}
