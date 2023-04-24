#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int row, col;

    // Reading the elements of matrix1
    printf("Enter the elements of matrix1:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            scanf("%d", &matrix1[row][col]);
        }
    }

    // Reading the elements of matrix2
    printf("Enter the elements of matrix2:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            scanf("%d", &matrix2[row][col]);
        }
    }

    // Adding two matrices
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            result[row][col] = matrix1[row][col] + matrix2[row][col];
        }
    }

    // Displaying the result matrix
    printf("Result Matrix:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            printf("%d ", result[row][col]);
        }
        printf("\n");
    }

    return 0;
}

/*  output 
Enter the elements of matrix1:
1 2
3 4
Enter the elements of matrix2:
5 6
7 8
Result Matrix:
6 8 
10 12   */
