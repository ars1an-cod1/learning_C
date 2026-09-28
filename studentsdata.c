#include<stdio.h>
int main(){

    char major[50];
    int student_id;
    char name[50];
 
 
   

    char filename[100];
    char answer='y';

    while(answer=='y'){

        printf("Whats's your name?");
        scanf(" %49[^\n]", name);

         printf("Whats your major? \n ");
    scanf(" %49[^\n]", major);

    printf("What's your student ID ? \n");
    scanf("%d", &student_id);
    
    printf("Add another student? (y/n)\n ");
    scanf(" %c", &answer);

    

    sprintf(filename, "Students_%d.txt",student_id);
    FILE*fp=fopen(filename,"w");
    

    if(fp==NULL){
        printf("Error opening a file \n");
        return 1;

    }


    fprintf(fp,"Name: %s\n, Major %s\n, Student_ID %d\n", name,major,student_id );
    fclose(fp);
    }
    
    printf("Done\n");

    return 0;




}