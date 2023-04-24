// Basic Calculator

#include <stdio.h>

int main(){

    int num1,num2,result;
    int choice;

    printf("Emter first number :\n");
    scanf("%d",&num1);
    printf("Enter second number :\n");
    scanf("%d",&num2);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);

switch(choice){
    case 1 :
    result=num1 + num2;
    printf("addition of %d and %d = %d\n",num1,num2,result);
    break ;
    case 2:
    result=num1 - num2;
    printf("Subtraction of %d and %d = %d\n",num1,num2,result);
    break;
    case 3:
    result=num1 * num2;
    printf("Multiplication of %d and %d = %d\n",num1,num2,result);
    break;
    case 4:
    result=num1 / num2;
    printf("Division of %d and %d = %d\n",num1,num2,result);
    break;
    default:
    printf("Invalid operator \n");

}
return 0;

}
