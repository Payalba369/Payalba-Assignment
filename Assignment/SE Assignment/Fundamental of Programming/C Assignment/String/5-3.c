
// Que.3	Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>

int main() {
    char str[50]=" ";
    int l,i ;
    printf("Enter the string");
    scanf("%s",str);
    l=strlen(str);
    for (i=l; i>=0; i--){
        printf ("%c ",str[i]);
    }
    return 0;
}


























