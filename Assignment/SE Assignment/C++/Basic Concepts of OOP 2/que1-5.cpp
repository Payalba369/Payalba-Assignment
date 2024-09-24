/* Que.5 Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

*/

#include <iostream>
#include <cmath>
using namespace std;

class rect {
private:
    double len;
    double width;

public:

    rect(double l,double w) {
        len = l;
        width = w;
    }

    double area() {
        return len * width;
    }

        double perimtr() {
        return 2 * (len + width);
    }

    void display() {
       cout << "Length: " << len << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimtr() << endl;
    }
};

int main() {
    double l, w;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;


    rect rect1(l, w);


    rect1.display();

    return 0;
}
