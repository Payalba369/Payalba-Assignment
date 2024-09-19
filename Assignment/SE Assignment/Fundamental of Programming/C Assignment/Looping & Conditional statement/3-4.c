
/* Que.4		WAP to print table up to given numbers */

#include <stdio.h>
int main() {
    int num, n;
    printf("Enter the number up to which you want to print the tables: ");
    scanf("%d", &n);
    for (num = 1; num <= n; num++) {
        printf("\nTable of %d:\n", num);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);         }
    }
    return 0; }
