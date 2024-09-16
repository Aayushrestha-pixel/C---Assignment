#include <iostream>
#include <string>

std::string decimalToHexadecimal(int decimal) {
    std::string hexadecimal;
    char hexDigits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (decimal > 0) {
        int remainder = decimal % 16;
        hexadecimal = hexDigits[remainder] + hexadecimal;
        decimal /= 16;
    }

    return hexadecimal;
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    std::string hexadecimal = decimalToHexadecimal(decimal);

    std::cout << "The hexadecimal is: " << hexadecimal << std::endl;

    return 0;
}