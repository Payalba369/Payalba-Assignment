


//Que.19	Calculate compound interest

#include <stdio.h>
#include <math.h>
int main()
{
  float principal = 10000;
  float rate = 5;
  float time = 2;
  float Amount = principal *  ((pow((1 + rate / 100),  time)));
  float CI = Amount - principal;
   printf("Compound Interest is : %lf",CI);
  return 0;
}










