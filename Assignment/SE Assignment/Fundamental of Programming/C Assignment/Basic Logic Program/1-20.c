


//Que.20	Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include <stdio.h>
int main()
{
  float salary,instl,emi,netSal;
  printf("Enter your Monthly Salary");
  scanf("%f",&salary);
  instl=(10*salary)/100;
  emi=(10*salary)/100;
  netSal=salary-(instl+emi);
  printf("Net Salary is : %f",netSal);
  return 0;
}











