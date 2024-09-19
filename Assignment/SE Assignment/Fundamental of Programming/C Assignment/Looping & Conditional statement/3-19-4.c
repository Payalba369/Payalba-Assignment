
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15




*/

#include <stdio.h>

int main() {
    int i, j, row=5;
    int num = 1;

    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}







