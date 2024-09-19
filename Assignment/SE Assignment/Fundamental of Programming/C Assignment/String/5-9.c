
// Que.9	Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

#define CHARS 255
int main(){
    int SIZE=100;
   char string[SIZE];
   int frequency[CHARS];
   int i = 0, maximum;
   int value;
   printf("Enter the string:  ");
   gets(string);
   for(i=0; i<CHARS; i++){
      frequency[i] = 0;
   }

   i=0;
   while(string[i] != '\0'){
      value = (int)string[i];
      frequency[value] += 1;
      i++;
   }

   maximum = 0;
   for(i=0; i<CHARS; i++){
      if(frequency[i] > frequency[maximum])
         maximum = i;
      }
      printf("Maximum occurrence character is '%c' = %d times.", maximum,
      frequency[maximum]);
   return 0;
}





























