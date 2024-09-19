
// Que.5	WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include <stdio.h>

void sortAsc(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDes(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2, ch;

    printf("Enter the  in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the  the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the  second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    if (ch == 1) {
        sortAsc(arr1, n1);
        sortAsc(arr2, n2);
        printf("Arrays ascending order:\n");
    } else if (ch == 2) {
        sortDes(arr1, n1);
        sortDes(arr2, n2);
        printf("Arrays descending order:\n");
    } else {
        printf("Invalid choice. Exiting.\n");
        return 1;
    }

    // Print the sorted arrays
    printf("First array: ");
    print(arr1, n1);

    printf("Second array: ");
    print(arr2, n2);

    return 0;
}



















