#include <stdio.h>

int main()
{
    int mtrx1[2][2] = {{1,2},{3,4}};
    int mtrx2[2][2] = {{5,6},{7,8}};
    int mtrx[2][2];

    // for (int i = 0; i <= 1; i++)
    // {
    //     for (int j = 0; j <= 1; j++)
    //     {
    //         mtrx[i][j] = mtrx1[i][j] + mtrx2[i][j];

    //     }
    // }

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
          
            printf("%d ", mtrx1[i][j]+mtrx2[i][j]);
            
        }
        printf("\n");
        
    }

    return 0;
}
