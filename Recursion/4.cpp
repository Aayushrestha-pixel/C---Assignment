#include <iostream>
#include <string>

void reverseString(std::string& str, int start, int end) {
    // Base case: if start >= end, return (since the string is already reversed)
    if (start >= end) {
        return;
    }

    // Swap characters at start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive case: reverse the remaining string
    reverseString(str, start + 1, end - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    int length = str.length();
    reverseString(str, 0, length - 1);

    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}