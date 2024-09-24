/*Write a program to swap the two numbers using friend function without using third variable

*/


#include <iostream>

using namespace std;

class Swap {


    int temp, a, b;

public:


    Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }


    friend void swap(Swap&);
};


void swap(Swap& s1)
{

    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;


    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}

int main()
{
    int n1,n2;
   cout << "\nEnter the Two number for Swapping: ";
   cin>>n1 >>n2;
    Swap s(n1, n2);
    swap(s);
    return 0;
}

