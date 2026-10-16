#include <stdio.h>
#include <stdlib.h> // for malloc usage we have to call stdlib.h from library

int main(){

    int n=3;

    int *arr= malloc(n*sizeof(int));// malloc address dondurur adresi tutabilen tek sey pointer 
    
    if(arr==NULL) {


        printf("Memory allocation is failed \n");

        return 1 ;
    }

    

    for(int i=0 ; i<n; i ++  ){

        arr[i] = (i + 1) * 10;

        printf("%d",arr[i]);
        printf("\n");

    }  

     free(arr);
arr = NULL;

    return 0;  
    



}
