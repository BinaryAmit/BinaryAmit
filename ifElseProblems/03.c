#include<stdio.h>

int main(){
    int operator,a,b;
     printf("Choose the option");
     printf("\n1. Add (+)\n");
     printf("2. Subtract (-)\n");
     printf("3. Multiply (*)\n");
     scanf("%d",&operator);
     printf("Enter first number : ");
     scanf("%d",&a);
     printf("Enter Second number : ");
     scanf("%d",&b);

     if (operator==1)
     {
        printf("Your answer is %d",a+b);
     }
     else if (operator==2)
     {
        
        printf("Your answer is %d",a-b);
     }
     else if(operator==3){
        printf("Your answer is %d",a*b);
        
     }
     else 
     {
        printf("Please choose the correct option");
        
     }
     

 

     return 0;
}
