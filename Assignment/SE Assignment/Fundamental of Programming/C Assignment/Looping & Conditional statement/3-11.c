
// Que.11	Accept 5 names from user at run time.

#include <stdio.h>

int main() {
    char names[5][100];
    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

