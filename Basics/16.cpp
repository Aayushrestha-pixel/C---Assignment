#include <iostream>
#include <bitset>

std::string onesComplement(std::string binary) {
    std::string result = "";
    for (char c: binary) {
        if (c == '0') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

int main() {
    std::string binary;
    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    std::string complement = onesComplement(binary);

    std::cout << "The one's complement of " << binary << " is: " << complement << std::endl;

    return 0;
}