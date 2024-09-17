#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    Employee(std::string n, int id, double s) : name(n), employeeID(id), salary(s) {}

    std::string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }

    void setSalaryBasedOnPerformance(double performanceRating) {
        if (performanceRating >= 4.0) {
            salary *= 1.10; // 10% increase
        } else if (performanceRating >= 3.0) {
            salary *= 1.05; // 5% increase
        } else {
            salary *= 0.95; // 5% decrease
        }
    }

    void displayEmployeeInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    std::string name;
    int employeeID;
    double salary;

    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);
    std::cout << "Enter employee ID: ";
    std::cin >> employeeID;
    std::cout << "Enter employee salary: ";
    std::cin >> salary;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    Employee employee(name, employeeID, salary);
    employee.displayEmployeeInfo();

    double performanceRating;
    std::cout << "Enter employee performance rating (out of 5.0): ";
    std::cin >> performanceRating;

    employee.setSalaryBasedOnPerformance(performanceRating);
    employee.displayEmployeeInfo();

    return 0;
}