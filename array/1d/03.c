#include <stdio.h>
int main()
{
    int arr[] = {1, 5, 7, 6};
     int max = arr[0];
    for (int i = 1; i <= 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
