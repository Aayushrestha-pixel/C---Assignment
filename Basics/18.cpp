#include <iostream>
#include <bitset>
#include <string>

std::string decimalToBinary(int decimal) {
    std::bitset<10> binary(decimal);
    return binary.to_string();
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    std::string binary = decimalToBinary(decimal);

    std::cout << "The binary representation of " << decimal << " is: " << binary << std::endl;

    return 0;
}