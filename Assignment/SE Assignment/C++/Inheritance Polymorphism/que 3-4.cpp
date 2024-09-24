/*Write a C++ Program display Student Mark sheet using Multiple inheritance
*/

#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:

    void stdData() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter student's age: ";
        cin >> age;
        cin.ignore();
    }


    void showStdData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Institute {
protected:
    float sub1, sub2, sub3;

public:

    void instituteData() {
        cout << "Enter marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter marks for Subject 2: ";
        cin >> sub2;
        cout << "Enter marks for Subject 3: ";
        cin >> sub3;
    }

    void showInstituteData() const {
        cout << "Marks in Subject 1: " << sub1 << endl;
        cout << "Marks in Subject 2: " << sub2 << endl;
        cout << "Marks in Subject 3: " << sub3 << endl;
    }


    float totalMarks() const {
        return sub1 + sub2 + sub3;
    }
};


class Sports {
protected:
    float sportsScore;

public:

    void inputSportsData() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }


    void displaySportsData() const {
        cout << "Sports Score: " << sportsScore << endl;
    }


    float getSportsScore() const {
        return sportsScore;
    }
};


class Result : public Institute, public Sports, public Person {
public:

    void resultData() {
        stdData();
        instituteData();
        inputSportsData();
    }

    void displayMarkSheet() const {
        cout << "\n======= Student Mark Sheet =======\n";
        showStdData();
        showInstituteData();
        displaySportsData();


        float totalMark = totalMarks() + getSportsScore();
        cout << "Total Marks (Institute + Sports): " << totalMark << endl;
        cout << "Percentage: " << (totalMark / 4) << "%" << endl;
    }
};

int main() {

    Result studentResult;


    studentResult.resultData();
    studentResult.displayMarkSheet();

    return 0;
}
