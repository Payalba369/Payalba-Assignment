/* Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
Include member functions to set and get these variables, as well as to validate if the date is valid.

*/


#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;


    bool LipYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }


    bool validDate(int day, int month, int year) {
        if (year < 1 || month < 1 || month > 12 || day < 1)
            return false;


        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


        if (LipYear(year)) {
            daysInMonth[1] = 29;
        }

        if (day > daysInMonth[month - 1])
            return false;

        return true;
    }

public:

    Date(int d, int m, int y) {
        if (validDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date\n";

        }
    }


    void setDate(int d, int m, int y) {
        if (validDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date! \n";
        }
    }


    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }


    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {

    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    Date date(day, month, year);

    cout << "Enter a new date (day month year): ";
    cin >> day >> month >> year;
    date.setDate(day, month, year);
    date.displayDate();

    return 0;
}
