#include <stdio.h>


int array_amount(int n){
int sum =0;

for (int i=1; i<=n; i++ ){

    sum= sum+i;

}
return sum;

}

int main(void){


    

    printf("%d\n", array_amount(4));   // 1+2+3+4 = 10
printf("%d\n", array_amount(5));   // 15

return 0;
}
