#include<stdio.h>

int main(){
     int a=10;
     int *ptr = &a;
    char c = 'A';
    char* ptrc = &c;

    //Normal
     printf("%d \n",a);  //10
    //Normal adress
     printf("%p \n",&a);  //0028FF2C
    //adress by pointer var(int* ptr=&a)
     printf("%x \n",ptr);  //0028FF2C
    //adress of pointer
     printf("%p \n",&ptr); //0028FF28
    //value of address stored in diff var
    // ptr ke andr jo address h. Us address me kya value rkha h.
     printf("%d \n",*ptr);  //10
     a=12;
    //  After value change it works
     printf("%d \n",*ptr);  //12


     printf("%c \n",c);  //12
     printf("%p \n",&c);  //12
     printf("%p \n",ptrc);  //12
     printf("%c \n",*ptrc);  //12
     

 

     return 0;
}