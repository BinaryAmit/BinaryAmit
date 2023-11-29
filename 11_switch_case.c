#include <stdio.h>

int main()
{
    char opr;
    int a,b;
    a=5;
    b=6;
    scanf("%c", &opr);

    switch (opr)
    {
        case '+':
        printf("The age is %d .",a+b);
        break;
        case 13:
        printf("The age is 13.");
        break;
        case 23:
        printf("The age is 23.");
        break;
        default : printf("The age is not 3, 13 ,23.");
        
     }
 

     return 0;
}
