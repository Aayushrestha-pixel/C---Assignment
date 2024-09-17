#include <iostream>
#include <string>
bool isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (std::tolower(str[start]) != std::tolower(str[end])) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int length = str.length();
    bool isPal = isPalindrome(str, 0, length - 1);

    if (isPal) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}