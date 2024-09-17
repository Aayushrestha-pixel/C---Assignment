#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 1900) : day(d), month(m), year(y) {}
    void setDay(int d) {
        if (isValidDate(d, month, year)) {
            day = d;
        } else {
            std::cout << "Invalid date. Day must be between 1 and 31." << std::endl;
        }
    }

    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            std::cout << "Invalid month. Month must be between 1 and 12." << std::endl;
        }
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    bool isValidDate(int d, int m, int y) const {
        if (m < 1 || m > 12) {
            return false;
        }
        if (d < 1) {
            return false;
        }
        if (m == 2) {
            if (isLeapYear(y)) {
                return d <= 29;
            } else {
                return d <= 28;
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            return d <= 30;
        } else {
            return d <= 31;
        }
    }

    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
    }

    void displayDate() const {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date date;

    int day, month, year;
    std::cout << "Enter day: ";
    std::cin >> day;
    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << "Enter year: ";
    std::cin >> year;

    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);

    date.displayDate();

    return 0;
}