// nested structure
#include <stdio.h>

struct Adress{

    char city[30];
    int zip;


};

struct Person {

    char name[30];
    int age;
    struct Adress addr;


};
int main(void){

    struct Person p1= {"Arslan", 21 ,"Riga", 1010};
    printf("%s %d \n" ,p1.addr.city,p1.addr.zip);
    printf("%s %d", p1.name,p1.age);

return 0;
}



