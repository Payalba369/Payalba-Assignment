
// Que.7		Write a program in C to copy one string to another string.


#include <stdio.h>
int main() {
   char s1[100];
   char s2[100];
   printf("Enter any string: ");
   gets(s1);
   int i;
   for(i=0;s1[i]!='\0';i++) {
      s2[i]=s1[i];
   }
   s2[i]='\0';

   printf("original string s1='%s'\n",s1);
   printf("copied string   s2='%s'",s2);
return 0;
}




























