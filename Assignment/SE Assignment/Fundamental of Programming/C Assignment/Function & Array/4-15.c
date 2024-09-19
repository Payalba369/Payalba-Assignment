
// Que.15	Store 5 numbers in array and sort it in ascending order

#include <stdio.h>

int main() {
    int num[5];
    int temp;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (num[i] > num[j]) {
                         temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("\nNumbers in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}






















