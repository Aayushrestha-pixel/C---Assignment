#include <iostream>
#include <string>
#include <sstream>

std::string findLargestWord(std::string str) {
    std::string largestWord = "";
    std::string currentWord = "";
    std::istringstream iss(str);

    while (iss >> currentWord) {
        if (currentWord.length() > largestWord.length()) {
            largestWord = currentWord;
        }
    }

    return largestWord;
}

int main() {
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);

    std::string largestWord = findLargestWord(inputStr);
    std::cout << "The Largest word: " << largestWord << std::endl;

    return 0;
}