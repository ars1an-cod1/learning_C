#include <stdio.h>

int main(int argc, char *argv[] ){

    if (argc <2 ){

        printf("Usage ./args : <filename>\n");

    return 1;
    }
FILE*fp=fopen( argv [1], "w");
if(fp==NULL){


printf(" Error opening file ");

return 1;
}

char name[]="Arslan";
int age = 21;

fprintf(fp, "Name : %s, Age :  %d\n", name , age );

fclose(fp);
printf("Done\n");

return 0;

}