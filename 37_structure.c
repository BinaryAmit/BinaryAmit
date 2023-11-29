#include<stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};

int main(){
    // printf("Enter name");
    // char name[10];
    // gets(name);
    // printf("Name : %s",name);


    
    struct Student Virat, rohit , Shami;
    Virat.id =1;
    rohit.id =2;
    Shami.id =3;
    Virat.marks = 56;
    rohit.marks = 6;
    Shami.marks = 56;
    strcpy(rohit.name, "Rohit is my Name");
    
    

    printf("Rohit got %d marks",rohit.marks);
    printf("Rohit got %s marks",rohit.name);

    

    
     return 0;
}
