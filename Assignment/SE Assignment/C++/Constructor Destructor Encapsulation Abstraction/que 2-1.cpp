/* Write a program to find the multiplication values and the cubic values using inline function

*/

#include <iostream>
using namespace std;


inline int multi(int x, int y) {
    return x * y;
}


inline int cube(int c) {
    return  c * c * c;
}

int main() {
    int n1, n2, no;


    cout << "Enter two number for multiplication: ";
    cin >> n1 >> n2;


    cout << "Enter a number for cubic value: ";
    cin >> no;


    cout << "Multiplication of " << n1 << " and " << n2 << " is: " << multi(n1, n2) << endl;
    cout << "Cubic value of " << no << " is: " << cube(no) << endl;

    return 0;
}
