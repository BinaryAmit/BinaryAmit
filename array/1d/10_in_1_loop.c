#include <stdio.h>

int main()
{
    int arr[] = {1, 9, 3, 4};
    int max = arr[0];
    int secMax = arr[0];
    for (int i = 1; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n", max);
    
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] != max && secMax < arr[i])   
        {
            secMax = arr[i];
        }
        
    }

    printf("%d\n", secMax);

    return 0;
}

