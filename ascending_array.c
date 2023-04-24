#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, j, temp;

    // Read the number of elements in the array
    printf("Enter the number of elements in the array (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Read the elements of the array
    printf("Enter the elements of the array, separated by spaces: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("The sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*  output 
Enter the number of elements in the array (up to 100): 5
Enter the elements of the array, separated by spaces: 2
4
5
6
8
The sorted array is: 2 4 5 6 8    */
