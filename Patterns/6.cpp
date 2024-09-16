#include <iostream>

int main() {
    int rows, value;
    
    std::cout << "Input number of rows: ";
    std::cin >> rows;
    
    for (int i = 1; i <= rows; i++) {
        value = i % 2; 
        
        for (int j = 1; j <= i; j++) {
            std::cout << value;  
            value = 1 - value; 
        }
        std::cout << std::endl;
    }
    
    return 0;
}