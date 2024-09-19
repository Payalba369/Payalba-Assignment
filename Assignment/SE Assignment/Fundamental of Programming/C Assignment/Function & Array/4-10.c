
// Que.10	WAP to perform Palindrome number using for loop and function
#include <stdio.h>
int isPali(int num) {
    int actNum = num;
    int revNum = 0;
    int remainder;

    while (num != 0) {
        remainder = num % 10;
        revNum = revNum * 10 + remainder;
        num /= 10;
    }

    if (revNum == actNum) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPali(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}





















