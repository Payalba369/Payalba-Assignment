
// Que.6		Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>
int main() {
    float base, height, area;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area = (base * height)/2;
    // area = 1/2 * base * height;
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}


