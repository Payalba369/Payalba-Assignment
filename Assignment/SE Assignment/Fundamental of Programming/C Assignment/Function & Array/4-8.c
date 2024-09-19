
// Que.8	WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int isPalindrome(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100], original[100];

    printf("Enter a string: ");
    gets(str);

    strcpy(original, str);


    reverseString(str);
    printf("Reversed string: %s\n", str);

    if (isPalindrome(original)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}




















