/* Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

*/



#include <iostream>

class Tri {
private:

    double s1, s2, s3;

    bool isValidTriangle() const {
        return (s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2);
    }

public:

    Tri(double side1, double side2, double side3) : s1(side1), s2(side2), s3(side3) {
        if (!isValidTriangle()) {
            std::cout << "Invalid triangle sides provided!" << std::endl;
        }
    }


    bool equi() const {
        if (isValidTriangle()) {
            return (s1 == s2 && s2 == s3);
        }
        return false;
    }


    bool isosceles() const {
        if (isValidTriangle()) {
            return (s1 == s2 || s2 == s3 || s1 == s3);
        }
        return false;
    }


    bool scalene() const {
        if (isValidTriangle()) {
            return (s1 != s2 && s2 != s3 && s1 != s3);
        }
        return false;
    }


    void triType() const {
        if (!isValidTriangle()) {
            std::cout << "The sides do not form a valid triangle." << std::endl;
        } else if (equi()) {
            std::cout << "The triangle is Equilateral." << std::endl;
        } else if (isosceles()) {
            std::cout << "The triangle is Isosceles." << std::endl;
        } else if (scalene()) {
            std::cout << "The triangle is Scalene." << std::endl;
        }
    }
};

int main() {
    double a, b, c;


    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> a >> b >> c;

    Tri triangle(a, b, c);

    triangle.triType();

    return 0;
}
