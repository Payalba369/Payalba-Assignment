
// Que.4	Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char name[90];
    int i=0;
    int len=0, word=0;
    printf("Enter the sentence:\n ");
    fgets(name,sizeof(name),stdin);
    len=strlen(name);
    for (i=0;i<len;i++){
        if (name[i]==+ ' '){
            word++;
        }
    }
    printf("the number of words :%d",word+1);
}



























