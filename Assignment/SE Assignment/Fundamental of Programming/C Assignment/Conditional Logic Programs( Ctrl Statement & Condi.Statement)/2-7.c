
// Que.7	Accept marks from user and check pass or fail

#include <stdio.h>
int main() {
    int marks;
    printf("enter marks(0-100) \n");
    scanf("%d", &marks );
    if (marks <= 30){
        printf ("fail\n");
    }
    else if ( marks >30 && marks <= 100)
   { printf(" pass");}
    else { printf(" wrong marks");
    }
    return 0;
}


