#include <iostream>

class Triangle {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    double getSideA() const {
        return sideA;
    }

    double getSideB() const {
        return sideB;
    }
    double getSideC() const {
        return sideC;
    }
    bool isValidTriangle() const {
        return (sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA);
    }
    std::string getTriangleType() const {
        if (!isValidTriangle()) {
            return "Invalid triangle";
        }

        if (sideA == sideB && sideB == sideC) {
            return "Equilateral";
        } else if (sideA == sideB || sideB == sideC || sideA == sideC) {
            return "Isosceles";
        } else {
            return "Scalene";
        }
    }
    void displayTriangleInfo() const {
        std::cout << "Side A: " << sideA << std::endl;
        std::cout << "Side B: " << sideB << std::endl;
        std::cout << "Side C: " << sideC << std::endl;
        std::cout << "Type: " << getTriangleType() << std::endl;
    }
};

int main() {
    double sideA, sideB, sideC;

    std::cout << "Enter side A: ";
    std::cin >> sideA;
    std::cout << "Enter side B: ";
    std::cin >> sideB;
    std::cout << "Enter side C: ";
    std::cin >> sideC;

    Triangle triangle(sideA, sideB, sideC);
    triangle.displayTriangleInfo();

    return 0;
}