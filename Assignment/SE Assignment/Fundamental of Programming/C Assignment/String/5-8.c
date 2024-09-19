
// Que.8	Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vol = 0, cont = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            vol++;
        }
       else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cont++;
        }
        i++;
    }


    printf("Total number of vowels: %d\n", vol);
    printf("Total number of consonants: %d\n", cont);

    return 0;
}




























