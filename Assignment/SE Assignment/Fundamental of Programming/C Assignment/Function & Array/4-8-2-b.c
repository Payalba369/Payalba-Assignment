
/* Que.8	Write a program of structure employee that provides the following
           b.	Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage */

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
    printf("\n");
}

int main() {
    struct Employee emp[5];


    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Enter Employee Number: ");
        scanf("%d", &emp[i].empno);
        getchar();

        printf("Enter Employee Name: ");
        gets(emp[i].empname);

        printf("Enter Employee Address: ");
        gets(emp[i].address);

        printf("Enter Employee Age: ");
        scanf("%d", &emp[i].age);

        printf("\n");
    }


    printf("Employee Information:\n");
    for (int i = 0; i < 5; i++) {
        printEmployee(emp[i]);
    }

    return 0;
}





















