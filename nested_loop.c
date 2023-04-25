#include <stdio.h>

int main() {
    char gender, marital_status;
    int age;

    // Read the person's gender, marital status, and age
    printf("Enter the person's gender (M/F), marital status (M/U), and age: ");
    scanf("%c %c %d", &gender, &marital_status, &age);

    // Check if the person is eligible for insurance
    if (gender == 'M') {
        if (marital_status == 'M' && age > 30) {
            printf("The person is eligible for insurance.\n");
        } else if (marital_status == 'U' && age > 25) {
            printf("The person is eligible for insurance.\n");
        } else {
            printf("The person is not eligible for insurance.\n");
        }
    } else if (gender == 'F') {
        if (marital_status == 'M' && age > 22) {
            printf("The person is eligible for insurance.\n");
        } else if (marital_status == 'U' && age > 18) {
            printf("The person is eligible for insurance.\n");
        } else {
            printf("The person is not eligible for insurance.\n");
        }
    } else {
        printf("Invalid gender.\n");
    }

    return 0;
}

/*  output 
Enter the person's gender (M/F), marital status (M/U), and age: M
M
36
The person is eligible for insurance. */
