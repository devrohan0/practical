#include <stdio.h>

int main(){

    int row,col,num;
    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}

/*  output
1
12
123
1234  */


#include <stdio.h>

int main() {
    int row, col, num = 1;
    for(row = 1; row <= 4; row++) {
        for(col = 1; col <= row; col++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

/*  output
1 
2 3 
4 5 6 
7 8 9 10  */




#include <stdio.h>

int main(){

    int row,col;

    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
 out put 
* 
* * 
* * * 
* * * *                       */




#include <stdio.h>

int main(){

    char row;
    char col;

    for(row='A';row<='D';row++){
        for(col='A';col<=row;col++){
            printf("%c",col);
        }
        printf("\n");
    }
    return 0;
}

/*
 out put 
A
AB
ABC
ABCD                   */



#include <stdio.h>

int main(){

    int row;
    int col; 
    char chr='A';

    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            printf("%c",chr);
            chr++;
        }
        printf("\n");
    }
    return 0;
}

/*
 out put 
A
BC
DEF
GHIJ              */
