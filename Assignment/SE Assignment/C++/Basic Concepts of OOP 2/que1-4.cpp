/* Que.4 Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

*/

#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:

    Circle(double r) {
        radius = r;
    }

    double area() {
        return M_PI * radius * radius;
    }


    double circum() {
        return 2 * M_PI * radius;
    }

    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Circumference: " << circum() << endl;
    }
};

int main() {
    double r;


    cout << "Enter the radius : ";
    cin >> r;


    Circle circle(r);


    circle.display();

    return 0;
}
