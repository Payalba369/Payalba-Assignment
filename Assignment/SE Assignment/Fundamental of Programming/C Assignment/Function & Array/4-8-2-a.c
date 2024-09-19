
/* Que.8	Write a program of structure employee that provides the following
            a.	information -print and display empno, empname, address andage */
#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);
    getchar();

    printf("Enter Employee Name: ");
    gets(emp.empname);

    printf("Enter Employee Address: ");
    gets(emp.address);

    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);


    printf("\nEmployee Information:\n");
    printEmployee(emp);

    return 0;
}





















