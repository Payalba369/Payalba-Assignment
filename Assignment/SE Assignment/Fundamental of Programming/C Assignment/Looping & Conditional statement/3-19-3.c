
/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *



*/

#include <stdio.h>

int main() {
    int i, j, row=5;

    for (i = 1; i <= row; i++) {
        for (j = i; j < row; j++) {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}







