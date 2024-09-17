#include <iostream>
#include <vector>
#include <cctype>  // for toupper
#include <string>  // for string

// Function to capitalize the first character of each string in the vector
std::vector<std::string> capitalizeFirstLetter(std::vector<std::string>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (!vec[i].empty()) {
            vec[i][0] = toupper(vec[i][0]);  // Capitalize the first character
        }
    }
    return vec;
}

int main() {
    // Initialize a vector of strings
    std::vector<std::string> vec = {"red", "green", "black", "white", "Pink"};
    
    // Output the original vector
    std::cout << "Original Vector elements: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    // Capitalize the first character of each element
    std::vector<std::string> result = capitalizeFirstLetter(vec);
    
    // Output the modified vector
    std::cout << "Capitalize the first character of each vector element: ";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}