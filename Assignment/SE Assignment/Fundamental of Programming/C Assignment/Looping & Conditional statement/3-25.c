// Que.25	(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

int main() {
    int n, i, sum=0;

    printf("Enter a  No ");
    scanf("%d", &n);

     for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("The sum of squares  1 to %d is %d\n", n, sum);

    return 0;
}













