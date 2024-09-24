/*Write a program of to swap the two values using template

*/


#include <iostream>
using namespace std;


template <class T>
int swap_numbers(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}

// Driver code
int main()
{
    int a, b;

    cout<<" Enter the Two numbers for Swapping"<<endl;
    cin>>a>>b;
    cout << "Before swapping: Number 1="<<a<<"Number 2="<<b<<endl;

    cout<<"==========================================="<<endl;
    swap_numbers(a, b);
    cout <<"After Swappinf "<<endl<<"Number 1 ="<< a << endl<< "Number 2= " << b << endl;


    return 0;
}
