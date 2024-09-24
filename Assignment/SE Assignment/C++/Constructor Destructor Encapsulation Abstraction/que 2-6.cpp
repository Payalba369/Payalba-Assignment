/* Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary.
Include member functions to calculate and set salary based on employee performance. Using of constructor

*/



#include <iostream>
#include <string>

class Employee {
private:

    std::string name;
    int employeeID;
    double salary;

public:

    Employee(const std::string &empName, int empID, double initialSalary)
        : name(empName), employeeID(empID), salary(initialSalary) {

      std::cout << "Employee Information: "  << std::endl;
    }

    void salaryIncri(char performance) {
        if (performance == 'A'|| 'a') {
            salary += salary * 0.25;
        } else if (performance == 'B'||'b') {
            salary += salary * 0.20;
        } else if (performance == 'C'|| 'c') {
            salary += salary * 0.10;
        } else if (performance == 'D' || 'd') {
            salary += salary * 0.5;
        } else {
            std::cout << "No change in salary." << std::endl;
        }
    }


    void empInfo() const {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: Rs." << salary << std::endl;
    }
};

int main() {

    std::string n;
    int id;
    double sal;

    std::cout << "Enter the employeeName: ";
    std::cin >> n;
    std::cout << "Enter the employee ID: ";
    std::cin >> id;
     std::cout << "Enter the employee Salary: ";
    std::cin >> sal;

    std::cout << "======================================================="<< std::endl;


    Employee emp1(n, id, sal);


    emp1.empInfo();
    std::cout << "======================================================="<< std::endl;

    char perform;
    std::cout << "Enter employee performance rating (A, B, C, D): ";
    std::cin >> perform;


    emp1.salaryIncri(perform);
    emp1.empInfo();

    return 0;
}
