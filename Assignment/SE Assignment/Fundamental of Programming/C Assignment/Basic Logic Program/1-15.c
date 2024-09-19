


//Que.15	Convert school’s name in abbreviated form

#include <stdio.h>
int main()
{
    char fname[20] ;
    char mname[20] ;
    char lname[20] ;
    printf("Enter full School name (first middle last):");
    scanf("%s %s %s", fname, mname, lname);
    printf("Abbreviated name: %c. %c. %s\n", fname[0] , mname[0] , lname);
    return 0;
}






