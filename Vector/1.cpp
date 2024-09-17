#include <iostream>
#include <vector>

std::vector<int> findSmallerThanNeighbours(const std::vector<int>& vec) {
    std::vector<int> result;
    if (vec.size() < 3) {
        return result;  
    }

    for (size_t i = 1; i < vec.size() - 1; ++i) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }

    return result;
}

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(0);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(7);
    
    std::cout << "Original Vector elements: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    std::vector<int> result = findSmallerThanNeighbours(vec);
    
    std::cout << "Vector elements that are smaller than their adjacent neighbours: ";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}