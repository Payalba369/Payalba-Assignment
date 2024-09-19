
/* Que.18	Write a C program to calculate profit and loss on a transaction.

 */


#include <stdio.h>

int main() {
    float cPrice, sellPrice, profOrLoss;

    printf("Enter the cost price: ");
    scanf("%f", &cPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellPrice);

    if (sellPrice > cPrice) {
        profOrLoss = sellPrice - cPrice;
        printf("You made a profit of %.2f\n", profOrLoss);
    } else if (cPrice > sellPrice) {
       profOrLoss = cPrice - sellPrice;
        printf("You incurred a loss of %.2f\n", profOrLoss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}









