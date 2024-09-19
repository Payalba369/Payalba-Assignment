


// Que.32	Accept 2 numbers and find out its sum check it size

#include <stdio.h>
int main()
{
    int sum, n1, n2;
    printf("Enter the No.1:");
    scanf("%d", &n1);
    printf("Enter the No.2:");
    scanf("%d", &n2);
    sum= n1+n2;
    printf("Sum of 2 Numbers is %d\n", sum);
    printf("Size of Sum is = %d bytes", sizeof(sum));
    return 0;
}




















