
// Que.12	Program of Armstrong Number in C Using For Loop & While Loop

// Using While Loop

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNo, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNo = num;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == originalNo) {
        printf("%d is an Armstrong number.\n", originalNo);
    } else {
        printf("%d is not an Armstrong number.\n", originalNo);
    }

    return 0;
}



