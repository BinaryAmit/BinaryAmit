#include <stdio.h>

int main()
{
    int i = 0, j = 1;

    printf("%d %d ", i, j);

    // int k = i + j;
    

    for (int x = 1; x <= 8; x++)
    {
        int k = i + j;
        printf("%d ", i + j);
        i = j, j = k;
        // k = i + j;
    }

    return 0;
}
