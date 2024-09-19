
// Que.2	WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {

        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result of Addition: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result of Subtraction: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result of Multiplication: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result of Division: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }
    }

    return 0;
}














