/* Assume a class cricketer is declared. Declare a derived class batsman from cricketer.
Data member of batsman. Total runs, Average runs and best performance.
Member functions input data, calculate average runs, Display data. (Single Inheritance)

*/
#include <iostream>
#include <string>
using namespace std;


class Cricketer {
protected:
    string name;
    int age;
    string team;

public:

    void cricketerInfo() {
        cout << "Enter cricketer name: ";
        getline(cin, name);
        cout << "Enter cricketer age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter cricketer team: ";
        getline(cin, team);
    }

    void showcricketerInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Team: " << team << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float avgRuns;
    int bestPerformance;

public:

    void batsmanInfo() {

        cricketerInfo();


        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance -highest score : ";
        cin >> bestPerformance;

        averageRuns();
    }


    void averageRuns() {
        int matchesPlayed;
        cout << "Enter the number of matches played: ";
        cin >> matchesPlayed;
        if (matchesPlayed > 0) {
            avgRuns = static_cast<float>(totalRuns) / matchesPlayed;
        } else {
            avgRuns = 0;
        }
    }


    void showBatsmanInfo() {

        showcricketerInfo();

        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << avgRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {

    Batsman batsman;

    batsman.batsmanInfo();
    cout << "\n======= Batsman Information =======\n";
    batsman.showBatsmanInfo();

    return 0;
}
