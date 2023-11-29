#include <stdio.h>
//define constant like this 
#define PI 3.14
int main(int argc, char const *argv[])
{
    // int a=4;
    // float b= 7.674;
    // printf("The value of a is %d\nThe value of b is %15.4f ",a,b);

    printf("%f \a",PI);
    // PI=6; can't do this bcz PI is a constant.
    // another way
    // const int b=8;
   

    return 0;
}

// format specifiers
// char %c 
// int %d 
// float %f 
// long %l 
// double %lf 
// long double %Lf