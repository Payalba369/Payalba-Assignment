// Que.9	Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

int main() {
    int n, sum = 0, i=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        i = 1;
        n = -n;     }
    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    if (i) {
        sum = -sum;
    }
    printf("The summation of digits is: %d\n", sum);

    return 0;
}

