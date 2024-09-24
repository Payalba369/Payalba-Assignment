/* Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
Include member functions to calculate the grade based on the marks and display the student's information.
Accept address from each student implement using of aggregation

*/

#include <iostream>
#include <string>
using namespace std;


class Address {
private:
    string street;
    string city;
    string state;
    int zip;

public:
    Address(string st, string ct, string stt, int z) : street(st), city(ct), state(stt), zip(z) {}

    void showAddress() {
        cout << street << ", " << city << ", " << state << ", " << zip << endl;
    }
};


class Student {
private:
    string name;
    string stdclass;
    int rollNo;
    int marks;
    Address address;

public:

    Student(string n, string sc, int r, int m, Address addr) : name(n), stdclass(sc), rollNo(r), marks(m), address(addr) {}


    char grade() {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }


    void studentInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << stdclass << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade() << endl;
        cout << "Address: ";
        address.showAddress();
    }
};

int main() {

    string name, stdclass, street, city, state;
    int rollNumber, marks, zip;

    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's class: ";
    getline(cin, stdclass);
    cout << "Enter student's roll number: ";
    cin >> rollNumber;
    cout << "Enter student's marks: ";
    cin >> marks;


    cin.ignore();
    cout << "Enter street: ";
    getline(cin, street);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter state: ";
    getline(cin, state);
    cout << "Enter zip code: ";
    cin >> zip;


    Address stdAddress(street, city, state, zip);
    Student student(name, stdclass, rollNumber, marks, stdAddress);

   cout << "============================================== "<<endl;
    student.studentInfo();

    return 0;
}
