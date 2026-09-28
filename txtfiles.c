#include <stdio.h>
int main()
{
  FILE *fp = fopen("output2.txt", "r");
    if(fp==NULL){
        printf("Error opening a file! \n");
        return 1;

    }
    char text[20];
    int age ;

    fscanf(fp,"Name: %19[^,], Age : %d ", text , &age );
    printf("Read from file: \n%s %d ", text, age);
    fclose(fp);


    return 0;


}