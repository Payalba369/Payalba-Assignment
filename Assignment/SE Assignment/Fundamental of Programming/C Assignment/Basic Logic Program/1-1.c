
/*Que.1		Display This Information using printf
		    a. Your Name
            b. Your Birth date
            c. Your Age
            d. Your Address*/

#include <stdio.h>
int main() {
    char name[50],add[100];
    int date,month,year,age;

    printf("Enter your Name = ");
    scanf("%s", &name);
    printf("Enter your Birthdate in DD-MM-YYYY = ");
    scanf("%d %d %d", &date,&month,&year);
    printf("Enter your age  = ");
    scanf("%d", &age);
    printf("Enter your Address = ");
    scanf("%s", &add);
    printf("============================================\n");
      printf("\nName = %s ", name);
      printf("\nBirthdate in %d-%d-%d = ", date, month, year);
      printf("\nAge  = %d", age);
      printf("\nAddress =%s ", add);

    return 0;
}
