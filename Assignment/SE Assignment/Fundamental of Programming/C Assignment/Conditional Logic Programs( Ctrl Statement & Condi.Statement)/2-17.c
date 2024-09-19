
/* Que.17	Write a C program to check whether a triangle can be formed with the given values for the angles.

 */


#include <stdio.h>
int main() {
    int angle1, angle2, angle3, sum;
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The angles can form a triangle.\n");
    } else {
        printf("The angles cannot form a triangle.\n");
    }
    return 0;
}









