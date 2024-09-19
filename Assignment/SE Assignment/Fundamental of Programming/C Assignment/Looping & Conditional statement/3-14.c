
// Que.14	Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>
unsigned long long fact(int n);
int main() {
    int num[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("Factorial of %d is %llu\n", num[i], fact(num[i]));
    }
    return 0;
}
unsigned long long fact(int n) {
    unsigned long long fact = 1;

    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}




