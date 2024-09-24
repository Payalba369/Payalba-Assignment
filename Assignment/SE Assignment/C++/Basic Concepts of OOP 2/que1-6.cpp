/* Que.6 Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

*/

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:

    void setValues(string pName, int pAge, string pCountry) {
        name = pName;
        age = pAge;
        country = pCountry;
    }


    string getName() {
        return name;
    }


    int getAge() {
        return age;
    }


    string getCountry() {
        return country;
    }


    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Country: " << getCountry() << endl;
    }
};

int main() {


    Person person;

    string nam;
    int a;
    string c;

    cout << "Enter Name: " << endl;
    cin>> nam;
    cout << "Enter Age: " << endl;
    cin>> a;
    cout << "Enter Country: " << endl;
    cin>> c;

    person.setValues(nam, a, c);

    cout << "==================================================\n "<<endl;

    person.display();

    return 0;
}
