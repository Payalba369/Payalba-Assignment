
// Que.13	WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>
int main() {
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
      for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Enter Number %d (%d) is even.\n", i + 1, numbers[i]);
        } else {
            printf("Enter Number %d (%d) is odd.\n", i + 1, numbers[i]);
        }     }
    return 0;
}






















