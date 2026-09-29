#include <stdio.h>

int whichisgreater(int a, int b){

    if( a>b ){
        return a;

    }

    else {

        return b;
    }
     
}

int main(void){


    int number =whichisgreater(7,3);
    printf(" Greater number is %d\n", number);

    return 0;

}
