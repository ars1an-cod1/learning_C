#include <stdio.h>

int main (int argc, char* argv[] ){

    if(argc<2){

        printf("Usage: ./scanfexamples <filename>\n");

        return 1;

    }
FILE*fp=fopen(argv[1],"w");

if(fp==NULL){

    printf("Error opening file \n");

    return 1;

}
 int age;
 char name[50];

 printf("Enter your name ");
 scanf("%49s", name );

 printf("Enter your age ");
 scanf("%d",&age );

 fprintf(fp,"Name : %s, Age %d \n", name ,age);

 fclose(fp);

 printf("Done");

 return 0;



}