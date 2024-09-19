
// Que.22	Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>
int main(){
int num, temp, rem, rev = 0,i =0;
    while (i < 3)
    {
       printf("\nenter a number:");
       scanf("%d", &num);
       i++;

        temp = num;
   while ( temp > 0)
   {
      rem = temp %10;
      rev = rev *10+ rem;
      temp = temp /10;
   }
   printf("reversed number is = %d ", rev);
   if ( num == rev ){
      printf("\n%d is Palindrome Number.", num);
   }
   else
   {
      printf("\n%d is not the Palindrome Number.", num);
   }
    }
   return 0;
}












