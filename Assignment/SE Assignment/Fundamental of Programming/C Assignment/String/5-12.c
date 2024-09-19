
// Que.12	Write a program in C to find the number of times a given word 'is' appears in the given string.


#include <stdio.h>
#include <string.h>

int countWord(char * str, char * toSearch);

int main()
{
    int MAX_SIZE= 100;
    char str[MAX_SIZE];
    char toSearch[MAX_SIZE];
    int count;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to find number of times  ");
    gets(toSearch);
    count = countWord(str, toSearch);
    printf("Total occurrences of '%s': %d", toSearch, count);
    return 0;
}
int countWord(char * str, char * toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;
    stringLen = strlen(str);
    searchLen = strlen(toSearch);
    count = 0;
    for(i=0; i <= stringLen-searchLen; i++)
    {
        found = 1;
        for(j=0; j<searchLen; j++)        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;             }
        }
        if(found == 1)
        {
            count++;
        }
    }
    return count;
}


































