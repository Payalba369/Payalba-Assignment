// Que.5		Find Area of Cube formula : a = 6a2

#include <stdio.h>

int main() {
    float sideLen, surface;

    printf("Enter the side length of the cube: ");
    scanf("%f", &sideLen);

    surface = 6 * sideLen * sideLen;

    printf("The surface area of the cube is: %.2f\n", surface);

    return 0;
}


