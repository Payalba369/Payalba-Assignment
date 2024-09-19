


// Que.25	Accept 5 expense from user and find average of expense

#include <stdio.h>
int main()
{
    float a, b, c, d, e;
    float avg,total;
    printf("Enter the 5 transaction of Expenses\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    total = a+b+c+d+e;
    avg= total/5;
    printf("Average Expense %f =", avg);
    return 0;
}
















