#include <stdio.h>
void main()
{
    int n1, n2;
    printf("Enter the value of Number1 and Number2 : ");
    scanf("%d %d", &n1, &n2);
    if (n1 == n2)
    {
        printf("Number1 and Number2 are equal\n");
    }
    else
    {
        printf("Number1 and Number2 are not equal\n");
    }
}
