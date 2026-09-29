#include<stdio.h>

int square_calc(int a){

    return a*a;
}

int main(void){


    int answer= square_calc(4);

    printf("%d", answer );

    return 0;
}