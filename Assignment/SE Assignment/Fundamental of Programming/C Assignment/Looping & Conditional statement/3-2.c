
// Que.2		WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>
int main() {
    int n[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", n[i]);
    }
    return 0;
}
