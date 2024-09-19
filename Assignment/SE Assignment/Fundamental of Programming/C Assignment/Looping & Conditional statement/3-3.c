
/* Que.3		WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers */

#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
            evenSum += num;
        } else {
            oddCount++;
            oddSum += num;
        }
    }

    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
