/* Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

*/


#include <iostream>

class BankAcc {
private:
    int accNum;
    double bal;

public:

    BankAcc(int acNo, double OpBal) : accNum(acNo), bal(OpBal)
    {
        std::cout << "BankAccount Account number: " << accNum << std::endl;
    }

    void depo(double amt)
    {
        if (amt > 0) {
            bal += amt;
            std::cout << "Deposited: Rs." << amt << " into account " << accNum << std::endl;
        } else {
            std::cout << "Deposit amount must be positive!" << std::endl;
        }
    }


    void with(double amt)
    {
        if (amt > bal) {
            std::cout << "Insufficient balance in account " << accNum << std::endl;
        } else if (amt > 0) {
            bal -= amt;
            std::cout << "Withdrew: Rs." << amt << " from account " << accNum << std::endl;
        } else {
            std::cout << "Withdrawal amount must be positive!" << std::endl;
        }
    }


    void displayBal() const
    {
        std::cout << "Account Number: " << accNum << ", Balance: Rs." << bal << std::endl;
    }


    ~BankAcc()
    {
        std::cout << "Transaction of Account number " << accNum << " is closed." << std::endl;
    }
};

int main() {

    double an,ob,dAmt,wAmt;
    std::cout << "Enter Account Number: " << std::endl;
    std::cin >> an ;

    std::cout << "Enter Opening balance of your Account: " << std::endl;
    std::cin >> ob;


    std::cout << "======================================================="<< std::endl;
    BankAcc acc1(an,ob);


    acc1.displayBal();

    std::cout << "======================================================="<< std::endl;


    std::cout << "Enter Deposit Ampunt in Rs.: " << std::endl;
    std::cin >> dAmt;

    acc1.depo(dAmt);


     std::cout << "======================================================="<< std::endl;
    acc1.displayBal();

    std::cout << "Enter Withdrawal Ampunt in Rs.: " << std::endl;
    std::cin >> wAmt;


    std::cout << "======================================================="<< std::endl;
    acc1.with(wAmt);


    acc1.displayBal();


    return 0;
}
