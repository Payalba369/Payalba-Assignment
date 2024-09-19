
/*
*
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *


*/

#include <stdio.h>

int main() {
    int i, j, row=6, n;

    for (i = 1; i <= row; i++) {
        n = 1;
        for (j = 1; j <= i; j++) {
            printf(" * ");
            n++;
        }
        printf("\n");
    }

    for (i = row - 1; i >= 1; i--) {
        n= 1;
        for (j = 1; j <= i; j++) {
            printf(" * ");
            n++;
        }
        printf("\n");
    }

    return 0;
}









