
// Que.5	Write a program in C to compare two strings without using string library functions.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter a string: ");
	scanf("%s", str);
	char newstr[20];
	printf("Enter another string: ");
	scanf("%s", newstr);
	int flag = 0;

	int i = 0;
	while(i < strlen(str))
	{
		if(str[i] != newstr[i])
		{
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 0)
		printf("Strings are equal");
	else
		printf("Strings are not equal");
	return 0;
}



























