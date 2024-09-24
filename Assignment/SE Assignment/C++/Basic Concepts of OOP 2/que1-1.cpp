// WAP to create simple calculator using class
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double calc;
    double num1, num2;
    char op;

    cout<< "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if(op == '+'){
       calc=num1+ num2;
       cout << "Addition" << setw(5) <<calc << endl;
    }
    else if(op == '-'){
        calc=num1- num2;
       cout << "Substraction" << setw(5) <<calc << endl;
    }
    else if(op == '*'){
        calc=num1*num2;
       cout << "multiply" << setw(5) <<calc << endl;
    }
    else if(op == '/'){
        calc=num1/num2;
       cout << "Division" << setw(5) <<calc << endl;
    }
    else{
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
