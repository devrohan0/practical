#include <stdio.h>
#include <string.h>
int main(){
    int length;
    char str[100];

    printf("Enter string \n");
    scanf("%s",str);

    length=strlen(str);

    printf("Length of the string is : %d\n",length);

return 0;
}
