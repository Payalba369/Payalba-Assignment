/*Write a C++ Program to show access to Private Public and Protected using Inheritance

*/

#include <iostream>
using namespace std;


class Base {
private:
    int priA;

protected:
    int proA;

public:
    int pubA;


    Base() : priA(25), proA(35), pubA(40) {}


    void ShowPriA() {
        cout << "Private variable : " << priA << endl;
    }
};

class Derived : public Base {
public:

    void showAccess() {

        cout << "Protected variable : " << proA << endl;


        cout << "Public variable (accessible in Derived): " << pubA << endl;
    }
};

int main() {
    Derived obj;

    obj.showAccess();

    cout << "Public variable (direct access ): " << obj.pubA << endl;

    obj.ShowPriA();

    return 0;
}
