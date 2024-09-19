


// Que.30	WAP to convert years into days and days into years

#include <stdio.h>
void main()
{
    int days, year,month,choice,week,d;
    printf("Enter the which you want to convert\n1.year into days\n2. days into year");
    scanf("%d", &choice);
    if(choice == 1)
    {
       printf("Enter the year");
       scanf("%d", &year);
       days= year*365;
      printf ("%d year is equal to %d month ", year, days);
    }
    else{
        printf("Enter the days");
        scanf("%d", &days);
        year = days/365;
        week = (days % 365)/7;
        d = days - ((year*365) + (week*7));
        printf ("%d days is equal to %d year and %d day ", days, year, d);
    }
}


















