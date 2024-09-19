#include <iostream>
#include <string>
#include <cctype>

std::string capitalizeWords(std::string str) {
    std::string capitalizedStr = "";
    bool isFirstLetter = true;

    for (char c : str) {
        if (isFirstLetter && std::isalpha(c)) {
            capitalizedStr += std::toupper(c);
            isFirstLetter = false;
        } else if (c == ' ') {
            capitalizedStr += c;
            isFirstLetter = true;
        } else {
            capitalizedStr += std::tolower(c);
        }
    }

    return capitalizedStr;
}

int main() {
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);

    std::string capitalizedStr = capitalizeWords(inputStr);
    std::cout << "The Capitalized string: " << capitalizedStr << std::endl;

    return 0;
}