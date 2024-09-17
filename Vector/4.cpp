#include <iostream>
#include <string>
#include <algorithm>  // for find()

// Function to check if all letters of second string are present in the first string
bool allLettersPresent(const std::string& str1, const std::string& str2) {
    for (size_t i = 0; i < str2.size(); ++i) {
        // Find the character in str1, if not found, return false
        if (str1.find(str2[i]) == std::string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str1 = "Aayush";
    std::string str2 = "yush";

    // Display the first and second strings
    std::cout << "First string: " << str1 << std::endl;
    std::cout << "Second string: " << str2 << std::endl;

    // Check if all letters of the second string are present in the first string
    bool result = allLettersPresent(str1, str2);

    // Output the result
    if (result) {
        std::cout << "All letters of the second string appear in the first string." << std::endl;
    } else {
        std::cout << "Not all letters of the second string appear in the first string." << std::endl;
    }

    return 0;
}