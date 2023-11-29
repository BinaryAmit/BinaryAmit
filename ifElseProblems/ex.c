#include<stdio.h>

int main(){
     char o;
     int a,b;
     printf("Enter first no. : ");

     scanf("%d",&a);
    //  printf("Enter operator (+,-,*,/) : ");
     scanf(" %c",&o);
    //  printf("Enter second no. : ");
     scanf("%d",&b);
     
     scanf("%d",&a);
    //  printf("Enter operator (+,-,*,/) : ");
     scanf(" %c",&o);
    //  printf("Enter second no. : ");
     scanf("%d",&b);

     switch (o)
     {
     case '+':
        printf("%d",a+b);
        break;
     case '-':
        printf("%d",a-b);
        break;
     case '*':
        printf("%d",a*b);
        break;
     case '/':
        printf("%d",a/b);
        break;
     
     default:
        printf("No result");
        break;
     }

 

     return 0;
}
