#include <iostream>
#include <vector>
#include <string>
#include <cctype>  
bool containsDigit(const std::string& str) {
    for (size_t i = 0; i < str.size(); ++i) {
        if (isdigit(str[i])) {
            return true;
        }
    }
    return false;
}
std::vector<std::string> findStringsWithNumbers(const std::vector<std::string>& vec) {
    std::vector<std::string> result;

    for (size_t i = 0; i < vec.size(); ++i) {
        if (containsDigit(vec[i])) {
            result.push_back(vec[i]);
        }
    }

    return result;
}

int main() {
    std::vector<std::string> vec = {"red", "green23", "1black", "white"};
    std::cout << "Original Vector elements: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    std::vector<std::string> result = findStringsWithNumbers(vec);
    
    if (result.empty()) {
        std::cout << "No strings contain numbers." << std::endl;
    } else {
        std::cout << "Strings that contain a number(s) from the vector: ";
        for (size_t i = 0; i < result.size(); ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}