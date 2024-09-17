#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string className;
    int rollNumber;
    double marks;

public:
    Student(std::string n, std::string c, int r, double m) : name(n), className(c), rollNumber(r), marks(m) {}
    std::string getName() const {
        return name;
    }

    std::string getClassName() const {
        return className;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    double getMarks() const {
        return marks;
    }

    std::string calculateGrade() const {
        if (marks >= 90) {
            return "A";
        } else if (marks >= 80) {
            return "B";
        } else if (marks >= 70) {
            return "C";
        } else if (marks >= 60) {
            return "D";
        } else {
            return "F";
        }
    }

    void displayStudentInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

int main() {
    std::string name, className;
    int rollNumber;
    double marks;

    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    std::cout << "Enter student class: ";
    std::getline(std::cin, className);
    std::cout << "Enter student roll number: ";
    std::cin >> rollNumber;
    std::cout << "Enter student marks: ";
    std::cin >> marks;

    Student student(name, className, rollNumber, marks);
    student.displayStudentInfo();

    return 0;
}