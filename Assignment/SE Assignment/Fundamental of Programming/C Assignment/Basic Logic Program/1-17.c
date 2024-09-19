


//Que.17	Calculate person’s insurance premium based on salary Topics Covered Control statements Conditional Statements

#include <stdio.h>

int main() {
    float salary, premium;

    printf("Enter the salary : ");
    scanf("%f", &salary);

    if (salary <= 20000) {
        premium = 0.05 * salary;
    } else if (salary <= 40000) {
        premium = 0.07 * salary;
    } else if (salary <= 60000) {
        premium = 0.10 * salary;
    } else {
        premium = 0.12 * salary;
    }
    printf("The insurance premium for a salary of Rs.%.2f is Rs.%.2f\n", salary, premium);
    return 0;
}








