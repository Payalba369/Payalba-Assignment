
/*Que.5		WAP to print factorial of given number  */

#include <stdio.h>

int main() {
    int num;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
        return 0;
}
