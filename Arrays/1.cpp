#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;

 std::cout << "Input First Name: ";
    std::cin >> firstName;

    std::cout << "Input Last Name: ";
    std::cin >> lastName;

    std::cout << "Name in reverse is: " << lastName << " " << firstName << std::endl;

    return 0;
}