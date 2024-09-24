/*Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

*/

#include <iostream>
using namespace std;

// Function to perform addition
int cal(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int cal(int a, int b, char operation) {
    if (operation == '-') {
        return a - b;
    }
    return 0;
}

// Function to perform multiplication
float cal(float a, float b) {
    return a * b;
}

// Function to perform division
double cal(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    int a, b;
    float x , y ;
    double p, q;
    char op;

        cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if(op == '+'){
    cout << "Enter two numbers: ";
    cin >> a >> b;
       cout << "Addition of " << a << " and " << b << ": " << cal(a, b) << endl;
    }
    else if(op == '-'){
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Subtraction of " << a << " and " << b << ": " << cal(a, b, '-') << endl;

    }
    else if(op == '*'){
    cout << "Enter two numbers: ";
    cin >> x >> y;
        cout << "Multiplication of " << x << " and " << y << ": " << cal(x, y) << endl;
    }
    else if(op == '/')
    {
    cout << "Enter two numbers: ";
    cin >> p >> q;

    cout << "Division of " << p << " and " << q << ": " << cal(p, q) << endl;
    }
    else{
       std::cout << "Invalid operator!" << std::endl;
    }

    return 0;
}

