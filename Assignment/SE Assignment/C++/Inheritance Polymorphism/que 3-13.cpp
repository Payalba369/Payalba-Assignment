/*Write a program to find the max number from given two numbers using friend function

*/



#include <iostream>
using namespace std;

class Nums {
private:
    int n1, n2;

public:

    Nums(int a, int b) : n1(a), n2(b) {}

    friend int max(Nums &n);
};


int max(Nums &n) {
    return (n.n1 > n.n2) ? n.n1 : n.n2;
}

int main() {
    int a, b;


    cout << "Enter two numbers: ";
    cin >> a >> b;


    Nums no(a, b);


    int maxNo = max(no);
    cout << "The maximum number is: " << maxNo << endl;

    return 0;
}

