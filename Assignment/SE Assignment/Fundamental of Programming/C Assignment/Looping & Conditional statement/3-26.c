// Que.26	(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>

int main() {
    int n, i, j;
    int totalSum = 0, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j <= i; j++) {
            sum += j;
        }
        totalSum += sum;
    }

    printf("The sum of the series is %d\n", totalSum);

    return 0;
}













