#include <iostream>

int main() {
    int year, month;
    std::cout << "Enter the year: ";
    std::cin >> year;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    int daysInMonth;
    if (month == 2) {
        // For the month of Feburary 
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        
        daysInMonth = 30;
    } else {
        
        daysInMonth = 31;
    }

    std::cout << "The month " << month << " of " << year << " has " << daysInMonth << " days." << std::endl;

    return 0;
}