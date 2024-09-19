


// Que.24	Accept 5 employees name and salary and count average and total salary

#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    int total;
    float avg;
    printf("Enter the Salary of 5 Employee\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a+b+c+d+e;
    avg= total/5;
    printf("Total salary %d\n", total);
    printf("Average Salary %f =", avg);
    return 0;
}















