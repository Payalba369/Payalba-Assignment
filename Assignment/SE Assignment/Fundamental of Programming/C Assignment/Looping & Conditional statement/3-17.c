
// Que.17	Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include <stdio.h>

int main() {
    int i = 0, num, even = 0, odd = 0;

    while (i < 5) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        i++;
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}





