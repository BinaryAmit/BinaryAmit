#include<stdio.h>
#include<math.h>

int main(){
     double a,b,c,x,r1,r2,d;
     printf("Format: ax^2+bx+c \n Enter the coefficients : ");
     scanf("%lf",&a);
     scanf("%lf",&b);
     scanf("%lf",&c);
    //  printf("%d %d %d ",a,b,c);

     d = (pow(b,2))-(4*a*c);

     if (d>=0)
     {
        /* code */
     r1 = (-b + (sqrt(d))) / (2*a) ;
     r2 = (-b - (sqrt(d))) / (2*a) ;

     

     printf("%lf , %lf",r1,r2);

     }
     else
     {
        printf("Roots are imaginary");
     }
     
    

     return 0;
}