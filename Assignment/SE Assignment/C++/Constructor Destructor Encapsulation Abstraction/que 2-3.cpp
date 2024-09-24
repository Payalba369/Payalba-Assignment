/* Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

*/

#include <iostream>
#include <string>

class Car {
private:
    std::string comp;
    std::string mod;
    int yr;

public:

    Car(const std::string & c, const std::string & m, int y)
        : comp(c), mod(m), yr(y) {}

    std::string getComp() const {
        return comp;
    }

    std::string getMod() const {
        return mod;
    }

    int getYr() const {
        return yr;
    }

    void displayInfo() const {
        std::cout << "Car Information: " << comp << " " << mod << " (" << yr << ")" << std::endl;
    }
};

int main() {

    Car car1("Maruti", "Breeza", 2021);

    car1.displayInfo();

    std::cout << "Company: " << car1.getComp() << std::endl;
    std::cout << "Model: " << car1.getMod() << std::endl;
    std::cout << "Year: " << car1.getYr() << std::endl;

    return 0;
}
