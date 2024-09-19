


// Que27	Convert days into months

#include <stdio.h>
void main()
{
    int ndays, year, week, days;
    int d = 7;
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365) / d;
    days =(ndays % 365) % d;
    printf ("%d is equal to %d years, %d weeks and %d days", ndays, year, week, days);
}
















