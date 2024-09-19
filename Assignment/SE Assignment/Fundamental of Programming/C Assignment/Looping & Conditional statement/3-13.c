
// Que.13	calculate the Factorial of a Given Number using while loop

#include <stdio.h>
int main() {
    int number;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        int i = number;
        while (i > 0) {
            factorial *= i;
            i--;
        }
        printf("Factorial of %d = %llu\n", number, factorial);
    }
    return 0;
}



