
// Que.7		WAP Find out length of string without using inbuilt function

#include <stdio.h>

int len(char str[]) {
    int l = 0;

    while (str[l] != '\0') {
        l++;
    }

    return l;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int l = len(str);
    printf("The length of the string is: %d\n", l);

    return 0;
}



















