
// Que.6.	Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>

void main()
{
  char str[50];
  int chars = 0, digits = 0, spec_chars = 0, i;

  printf("Enter string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++)
  {
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
      chars++;
    else if (str[i]>='0' && str[i]<='9')
      digits++;
    else
      spec_chars++;
  }

  printf("\nNumber of alphabets: %d\n", chars);
  printf("Number of digits: %d\n", digits);
  printf("Number of special characters: %d\n", spec_chars);
}




























