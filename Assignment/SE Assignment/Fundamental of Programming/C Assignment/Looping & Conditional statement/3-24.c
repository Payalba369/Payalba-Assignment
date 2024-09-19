// Que.24	1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() {
    int n,sum;

    printf("Enter a integer: no ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of  %d natural numbers is %d\n", n, sum);

    return 0;
}












