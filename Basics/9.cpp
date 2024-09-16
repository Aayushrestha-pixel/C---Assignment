#include <iostream>
#include <string>
#include <sstream>

int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int countDaysInYear(int year, int month, int day) {
    int days = 0;
    for (int i = 1; i < month; i++) {
        if (i == 2) {
            if (isLeapYear(year)) {
                days += 29;
            } else {
                days += 28;
            }
        } else {
            days += daysInMonth[i - 1];
        }
    }
    return days + day;
}

int countDaysBetweenDates(std::string date1, std::string date2) {
    int year1, month1, day1, year2, month2, day2;
    std::stringstream ss1(date1), ss2(date2);
    ss1 >> year1;
    ss1.ignore(1, '-');
    ss1 >> month1;
    ss1.ignore(1, '-');
    ss1 >> day1;
    ss2 >> year2;
    ss2.ignore(1, '-');
    ss2 >> month2;
    ss2.ignore(1, '-');
    ss2 >> day2;

    int days1 = 0, days2 = 0;
    for (int i = 1; i < year1; i++) {
        if (isLeapYear(i)) {
            days1 += 366;
        } else {
            days1 += 365;
        }
    }
    days1 += countDaysInYear(year1, month1, day1);

    for (int i = 1; i < year2; i++) {
        if (isLeapYear(i)) {
            days2 += 366;
        } else {
            days2 += 365;
        }
    }
    days2 += countDaysInYear(year2, month2, day2);

    return abs(days2 - days1);
}

int main() {
    std::string date1, date2;
    std::cout << "Enter the first date (YYYY-MM-DD): ";
    std::cin >> date1;
    std::cout << "Enter the second date (YYYY-MM-DD): ";
    std::cin >> date2;

    int daysBetween = countDaysBetweenDates(date1, date2);

    std::cout << "There are " << daysBetween << " days between " << date1 << " and " << date2 << "." << std::endl;

    return 0;
}