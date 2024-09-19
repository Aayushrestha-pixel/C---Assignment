#include <iostream>
#include <string>
#include <algorithm> 
bool allLettersPresent(const std::string& str1, const std::string& str2) {
    for (size_t i = 0; i < str2.size(); ++i) {
        if (str1.find(str2[i]) == std::string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str1 = "Aayush";
    std::string str2 = "yush";
    std::cout << "First string: " << str1 << std::endl;
    std::cout << "Second string: " << str2 << std::endl;

    bool result = allLettersPresent(str1, str2);

    if (result) {
        std::cout << "All letters of the second string appear in the first string." << std::endl;
    } else {
        std::cout << "Not all letters of the second string appear in the first string." << std::endl;
    }

    return 0;
}