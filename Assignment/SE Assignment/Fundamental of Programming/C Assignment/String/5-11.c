
// Que.11	Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("The modified sentence is: %s", str);

    return 0;
}

































