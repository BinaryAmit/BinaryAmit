#include <stdio.h>

int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        
        for (int s = 1; s <= row-1; s++)
        {
            printf("#");
        }
       
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
