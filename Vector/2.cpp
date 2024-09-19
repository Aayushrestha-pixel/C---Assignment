#include <iostream>
#include <vector>
#include <cctype>  
#include <string> 

std::vector<std::string> capitalizeFirstLetter(std::vector<std::string>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (!vec[i].empty()) {
            vec[i][0] = toupper(vec[i][0]);  
        }
    }
    return vec;
}

int main() {

    std::vector<std::string> vec = {"red", "green", "black", "white", "Pink"};
    
    std::cout << "Original Vector elements: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    std::vector<std::string> result = capitalizeFirstLetter(vec);
    
    std::cout << "Capitalize the first character of each vector element: ";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}