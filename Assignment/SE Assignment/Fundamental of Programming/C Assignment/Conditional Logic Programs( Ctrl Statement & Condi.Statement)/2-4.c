
// Que.4	WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include <stdio.h>

int main() {
    int num1,num2,op,total;
    printf("Enter the first operand\n");
    scanf("%d",&num1);

    printf("Enter the secon operand\n");
    scanf("%d",&num2);

    printf("select the operation\nPress 1 => Addition\nPress 2 => Subtraction\nPress 3 => Multiplication\nPress 4 => Division\nPress 5 => Modulo");
    scanf("%d",&op);

    if(op==1){
        total=num1+num2;
        printf("Your Answer is = %d", total);
    }
    if(op==2){
        total=num1-num2;
        printf("Your Answer is = %d", total);
    }
    if(op==3){
        total=num1*num2;
        printf("Your Answer is = %d", total);
    }
    if(op==4){
        total=num1/num2;
        printf("Your Answer is = %d", total);
    }
    if(op==5){
        total=num1%num2;
        printf("Your Answer is = %d", total);
    }


    return 0;
}

