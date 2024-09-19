
/* Que.19	Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :


Unit	Charge/unit
upto 350 	@1.20
350 and above but less than 600 	@1.50
600 and above but less than 800 	@1.80
800 and above 	@2.00

If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-


 */



#include <stdio.h>
int main() {
    int cID;
    char name[30];
    float units, billAmt;

    printf("Enter Customer ID: ");
    scanf("%d", &cID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 350) {
        billAmt = units * 1.20;
    } else if (units < 600) {
        billAmt = units * 1.50;
    } else if (units < 800) {
        billAmt = units * 1.80;
    } else {
        billAmt = units * 2.00;
    }

    if (billAmt > 800) {
        billAmt += billAmt * 0.18;
    }

    if (billAmt < 256) {
        billAmt = 256;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", cID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %.2f\n", units);
    printf("Total Amount to be Paid: Rs. %.2f\n", billAmt);

    return 0;
}











