
// Que.16	Accept 5 numbers from user and perform sum of array

#include <stdio.h>

int main() {
    int num[5],sum=0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum += num[i];
    }

    printf("\nThe sum of the numbers is: %d\n", sum);

    return 0; }























