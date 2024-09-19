
// Que.12	Program of Armstrong Number in C Using For Loop & While Loop

// Using For Loop

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNo, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNo = num;
    for (int temp = num; temp != 0; n++) {
        temp /= 10;
    }
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }
    if (result == originalNo) {
        printf("%d is an Armstrong number.\n", originalNo);
    } else {
        printf("%d is not an Armstrong number.\n", originalNo);
    }
    return 0;
}


