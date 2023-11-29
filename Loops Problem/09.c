#include<stdio.h>

int main(){
     for (int i = 1; i <= 5 ; i++)
     {
        for (int j=1; j<i; j++)
        {   
            int k = j+64;
            
            char ch = (char)k;
            printf("%c ",ch);
        }

     printf(" \n");
     }

    // int n = 65;
    // char c1 =(char)n;
    // printf("%d %c",n,c1);
 

     return 0;
}
