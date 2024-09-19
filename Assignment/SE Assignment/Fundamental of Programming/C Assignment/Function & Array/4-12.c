
// Que.12	WAP to accept 5 students name and store it in array

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], 50, stdin);

        names[i][strcspn(names[i], "\n")] = 0;
    }

    printf("\nStored names of students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}





















