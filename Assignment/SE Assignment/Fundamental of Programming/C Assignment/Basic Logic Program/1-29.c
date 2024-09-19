


// Que.29	Convert minutes into seconds and hours

#include <stdio.h>
void main()
{
    float min, hrs, sec;
    printf("Enter the number of minutes\n");
    scanf("%f", &min);
    hrs=min/60;
    sec=min*60;
    printf ("%.2f Minutes equal to %.2f second and  %.2f  hours", min, sec, hrs);
}


















