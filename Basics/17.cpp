#include <iostream>
#include <string>

std::string onesComplement(std::string binary) {
    std::string result = "";
    for (char c : binary) {
        if (c == '0') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

std::string addOne(std::string binary) {
    std::string result = "";
    int carry = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '0' && carry == 1) {
            result = '1' + result;
            carry = 0;
        } else if (binary[i] == '1' && carry == 1) {
            result = '0' + result;
            carry = 1;
        } else {
            result = binary[i] + result;
        }
    }
    if (carry == 1) {
        result = '1' + result;
    }
    return result;
}

std::string twosComplement(std::string binary) {
    std::string onesComp = onesComplement(binary);
    std::string twosComp = addOne(onesComp);
    return twosComp;
}

int main() {
    std::string binary;
    std::cout << "Input a 8 bit binary value: ";
    std::cin >> binary;

    std::cout << "The original binary = " << binary << std::endl;

    std::string onesComp = onesComplement(binary);
    std::cout << "After ones complement the value = " << onesComp << std::endl;

    std::string twosComp = twosComplement(binary);
    std::cout << "After twos complement the value = " << twosComp << std::endl;

    return 0;
}