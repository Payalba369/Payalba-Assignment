
// Que.1	Write a program to find out the max number from given array using function

#include <stdio.h>

int Max(int arr[], int n) {

    int max_val = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int main() {
    int array[] = {12, 18, 32, 81, 26, 51};
    int n = sizeof(array) / sizeof(array[0]);

    int max_num = Max(array, n);
    printf("The maximum number in the array is: %d\n", max_num);

    return 0;
}














