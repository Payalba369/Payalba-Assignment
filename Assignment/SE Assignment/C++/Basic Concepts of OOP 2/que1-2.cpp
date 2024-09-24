/* 2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance

*/
#include <iostream>
#include <string>
using namespace std;

class BankAcc {
private:
    string holderName;
    int accountNo;
    string accountType;
    double balance;

public:

    void assignVal(string name, int accNumber, string accType, double currentBalance) {
        holderName = name;
        accountNo = accNumber;
        accountType = accType;
        balance = currentBalance;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Amount: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Amount: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }


    void display() const {
        cout << "Account Holder Name: " << holderName << endl;
        cout << "Account Balance: Rs." << balance << endl;
    }
};

int main() {

    BankAcc account;
    string nam;
    int accN;
    string type;
    double bal,withAm,depoAm;



    cout << "Enter name: ";
    cin >> nam;

    cout << "Enter the Acc number: ";
    cin >> accN;
    cout << "Enter type of Account: ";
    cin >> type;

    cout << "Enter Balance Ampount: ";
    cin >> bal;


    account.assignVal(nam, accN, type, bal);

    cout << "=============================================\n";
    account.display();

    cout << "=============================================\n";
      cout << "Enter Deposit Ampount: ";
      cin >> depoAm;

      cout << "Enter Withdrwal Ampount: ";
      cin >> withAm;

    account.deposit(depoAm);

    account.withdraw(withAm);

    cout << "=============================================\n";
    account.display();

    return 0;
}
