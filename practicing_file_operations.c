#include <stdio.h>

int main( int argc, char *argv[]){

    if ( argc<2 ){

        printf("Usage: ./args <filename>\n ");


    return 1;
    }
FILE*fp=fopen(argv[1], "w");

if(fp==NULL){
printf("Error opening file\n");

return 1;
}

fprintf(fp, "Hello from my  program !\n");

fclose(fp);
printf("Done\n");

return 0;
}










