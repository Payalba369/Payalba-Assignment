
// Que.10	WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0.0) {
        if (num == 0.0)
        {
            printf("You entered 0.");
        }
        else         {
            printf("You entered a negative number.");
        }
    }
    else    {
        printf("You entered a positive number.");
    }
    return 0; }




