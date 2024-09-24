/*Create a class person having members name and age. Derive a class student having member percentage.
Derive another class teacher having member salary.
Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:

    void personData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }


    void showPersonData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:

    void studentData() {
        personData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cin.ignore();
    }


    void showstudentData() const {
        showPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};


class Teacher : public Person {
protected:
    float salary;

public:

    void teacherData() {
        personData();
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }


    void showTeacherData() const {
        showPersonData();
        cout << "Salary: Rs." << salary << endl;
    }
};


class presentStudent : public Student, public Teacher {
public:

    void teachingStd() {
        cout << "Enter TeachingStudent's student details: \n";
        Student::studentData();
        cout << "Enter TeachingStudent's teacher details: \n";
        Teacher::teacherData();
    }


    void showTeachingStd() const {
        cout << "\n======= Student Details =======\n";
        Student::showstudentData();
        cout << "\n======= Teacher Details =======\n";
        Teacher::showTeacherData();
    }
};


int main() {
    presentStudent presentStd;

    presentStd.teachingStd();
    presentStd.showTeachingStd();

    return 0;
}
