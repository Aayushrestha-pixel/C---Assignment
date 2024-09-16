#include <iostream>
#include <string>

int binaryToDecimal(std::string binary) {
    int decimal = 0;
    int base = 1;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    int decimal = binaryToDecimal(binary);

    std::cout << "The decimal number is: " << decimal << std::endl;

    return 0;
}