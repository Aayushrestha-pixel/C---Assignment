#include <iostream>
#include <string>

std::string removeCharacter(std::string str, char c) {
    std::string result = "";
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] != c) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string str;
    char c;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter a character to remove: ";
    std::cin >> c;

    std::cout << "Original string: " << str << std::endl;
    std::cout << "Character to remove: " << c << std::endl;
    std::cout << "Updated string: " << removeCharacter(str, c) << std::endl;

    return 0;
}