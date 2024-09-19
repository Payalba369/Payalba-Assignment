


//Que.23	WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>
  int main()
{
    int a, b;
    printf("Enter 1st integer numbers\n");
    scanf("%d", &a);
    printf("Enter 2nd integer numbers\n");
    scanf("%d", &b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("After swapping a = %d and b = %d\n", a ,b);
    return 0;
}














