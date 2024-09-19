
// Que.6		WAP to print Fibonacci series up to given numbers

#include <stdio.h>

int main() {
    int i;
    int first = 0, second = 1, next;
    printf("Enter the upper limit for Fibonacci series: ");
    scanf("%d", &i);

    if (i >= 0) {
        printf("%d ", first);
    }
    if (i >= 1) {
        printf("%d ", second);
    }
    next = first + second;
    while (next <= i) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}
