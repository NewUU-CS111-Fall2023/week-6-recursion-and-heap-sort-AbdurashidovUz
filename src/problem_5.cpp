#include <iostream>
#include <string>

bool isPalindrome(const std::string& word, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (word[start] != word[end]) {
        return false;
    }

    return isPalindrome(word, start + 1, end - 1);
}

std::string checkPalindrome(const std::string& word) {
    int start = 0;
    int end = word.length() - 1;

    if (isPalindrome(word, start, end)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;

    std::string result = checkPalindrome(word);
    std::cout << result << std::endl;

    return 0;
}

//Time Complexcity is O(n)