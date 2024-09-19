
// Que.2	Write a program in C to separate individual characters from a string.

#include <stdio.h>
#include <string.h>

int main() {
   char str[90]=" ";
    int l=0;
    printf("Enter the string");
    scanf("%s",str);
    while (str[l]!='\0'){
        printf("%c \n",str[l]);
        l++;
    }

    return 0;
}


























