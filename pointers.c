#include <stdio.h>
int sum(int n){

return n+1; // void kullanmamamizin nedeni geriye return ile sayi dondurmek   
}

void sum1(int *n){
   *n=*n+1; 
}





int main(){
int x=10;
int *p= &x; // create pointer // her pointer adres tutar  // p address *p o adresteki deger
printf("%d\n", *p); //10     // p = x'in adresi ,orn 0x7ffd1234 
printf("%p\n",p ); // adresi gostermek icin printf ile %p kullanmalisin 
 // *p = o adrese git ve, oradaki degeri al ->10

 *p=50; // integer yazmana gerek yok degeri degistirir.

 printf("%d \n ", x);

 x = sum(x);
printf("%d\n", x);

sum1(&x);
printf("%d\n",x);



    return 0;
}          





