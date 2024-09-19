
/*
Que.25	Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
		For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill



 */



#include <stdio.h>

int main() {
    float units, billAmt, totalBill;


    printf("Enter the units of electricity consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        billAmt = units * 0.50;
    } else if (units <= 150) {
        billAmt = units * 0.75;
    } else if (units <= 250) {
        billAmt = units  * 1.20;
    } else {
        billAmt =units  * 1.50;
    }

    totalBill = billAmt + (billAmt * 0.20);

    printf("Total electricity bill is: Rs. %.2f\n", totalBill);

    return 0;
}
















