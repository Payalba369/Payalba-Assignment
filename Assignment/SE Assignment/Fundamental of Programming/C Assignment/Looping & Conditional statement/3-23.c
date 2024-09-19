// Que.23	C Program to Reverse a Number Using FOR Loop
// Series Program:

#include <stdio.h>

int main() {
    int num, revNo = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        i = num % 10;
        revNo = revNo * 10 + i;
    }
    printf("Reversed number: %d\n", revNo);

    return 0; }












