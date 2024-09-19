
/*
A
A B
A B C
A B C D
A B 1 C D

*/

#include <stdio.h>

int main() {
    int i, j, row=5;
    char ch;
    for (i = 1; i <= row; i++) {
        ch = 'A';
        for (j = 1; j <= i; j++) {

            if (i == row && j == i / 2 + 1) {
                printf("1 ");
            } else {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}








