/*Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number.
 Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test.
The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include <iostream>
using namespace std;


class Students {
protected:
    int rollNo;

public:
    void setrollNo(int roll) {
        rollNo = roll;
    }

    void displayrollNo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};


class Test : public Students {
protected:
    float sub1;
    float sub2;

public:
    void setMarks(float s1, float s2) {
        sub1 = s1;
        sub2 = s2;
    }

    void displayMarks() {
        cout << "Marks in Subject 1: " << sub1<< endl;
        cout << "Marks in Subject 2: " << sub2 << endl;
    }
};


class Result : public Test {
public:
    void displayTotal() {
        float total = sub1 + sub2;
        displayrollNo();
        displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result student1;
    float sm1,sm2;
    int r;
    cout << "Enetr the Roll No: " << endl;
    cin >> r;
    cout << "Marks in Subject 1: " << endl;
    cin >> sm1;
       cout << "Marks in Subject 2: "<< endl;
    cin >> sm2;

     cout << "=====================================================" << endl;


    student1.setrollNo(r);
    student1.setMarks(sm1, sm2);

    student1.displayTotal();

     cout << "=====================================================" << endl;

    return 0;
}
