
// Que.10	Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include <stdio.h>

int main() {
    int n, first, last,sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;     }
    last = n % 10;
    first = n;
    while (first >= 10) {
        first = first / 10;
    }
    sum = first + last;
    if (n < 0) {
        sum = -sum;     }

    printf("The summation of the first and last digit is: %d\n", sum);

    return 0; }

