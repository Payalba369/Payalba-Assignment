


// Que.33	C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3).

#include <stdio.h>
#include <math.h>
int main()
{
	int num, a, b, c;
	printf("\nEnter The Number .\n");
	scanf("%d", &num);
	a = pow(num, 1);
	b = pow(num, 2);
	c = pow(num, 3);
	printf("\nOutput Is\n\n");
	printf("%d, %d, %d \n\n", a, b, c);
	return 0;
}




















