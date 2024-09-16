#include <iostream>
#include <string>

std::string reverseString(std::string str) {
    std::string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

int main() {
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);

    std::string reversedStr = reverseString(inputStr);
    std::cout << "Reversed string: " << reversedStr << std::endl;

    return 0;
}