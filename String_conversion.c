//    UPPER TO LOWER CASE


#include <stdio.h>
#include <string.h>

int main(){

    int i;
    char str[100];

    printf("Enter string: ");
    scanf("%[^\n]", str); // read the whole string until newline character


    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {  // Check if character is uppercase
            str[i] = str[i] + 32; // convert to lowercase by adding 32 to ASCII value
        }
    }

    printf("Lowercase string: %s", str);

    return 0;
}





// lower to UPPER CASE


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // read the whole string until newline character


    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // Check if character is lowercase
            str[i] = str[i] - 32; // Convert to uppercase by subtracting 32 from ASCII value
        }
    }

    printf("The uppercase string is: %s\n", str);

    return 0;
}
