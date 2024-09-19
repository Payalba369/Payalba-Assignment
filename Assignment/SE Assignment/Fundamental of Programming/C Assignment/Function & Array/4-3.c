
// Que.3		WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void revString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    revString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);

    revString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}















