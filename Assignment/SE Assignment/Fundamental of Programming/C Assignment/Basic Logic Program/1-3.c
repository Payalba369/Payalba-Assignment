
//Que.3		WAP to Find Area And Circumference of Circle

#include<stdio.h>
int main()
{
  float radius, area, cf;
    printf("Enter Radius of Circle\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("The area of Circle is %f",area);
    cf=2*3.14*radius;
    printf("\nThe Circumference of Circle is %f",cf);
}


