/*Write a C++ Program to find Area of Rectangle using inheritance

*/
#include <iostream>
using namespace std;

class Shape {
protected:
    float len;
    float wid;

public:

    void inputDimensions() {
        cout << "Enter length: ";
        cin >> len;
        cout << "Enter width: ";
        cin >> wid;
    }
};

class Rectangle : public Shape {
public:

    float area() {
        return len * wid;
    }

    void displayArea() {
        cout << "Rectangle Area : " << area() << endl;
    }
};

int main() {

    Rectangle rect;

    rect.inputDimensions();

    rect.displayArea();

    return 0;
}
