// Que.8	Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>
int main() {
    int n, max = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        n = -n;
    }
    while (n != 0) {
        int digit = n % 10;
        if (digit > max) {
            max = digit;
        }
       n = n / 10;
    }
    printf("The maximum digit is: %d\n", max);

    return 0;
}

