/* Write a program of Addition, Subtraction, Division, Multiplication using constructor.

*/

#include <iostream>

class Calc {
private:
    double x, y;

public:

    Calc(double n1, double n2) : x(n1), y(n2) {}

    double add() const {
        return x + y;
    }

    double sub() const {
        return x - y;
    }


    double multi() const {
        return x * y;
    }

    double divi() const {
        if (y != 0) {
            return x / y;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    char op;


    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;


    Calc calc1(a, b);


    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    if(op == '+'){

        std::cout << "Addition: " << calc1.add() << std::endl;
    }
    else if(op == '-'){
       std::cout << "Subtraction: " << calc1.sub() << std::endl;

    }
    else if(op == '*'){
        std::cout << "Multiplication: " << calc1.multi() << std::endl;
    }
    else if(op == '/'){
       std::cout << "Division: " << calc1.divi() << std::endl;
    }
    else{
       std::cout << "Invalid operator!" << std::endl;
    }

    return 0;
}
