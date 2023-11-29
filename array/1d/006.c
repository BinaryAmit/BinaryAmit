#include <stdio.h>
int maximum(int arr[])
{
    int max = arr[0];
    int i;
    for ( i = 1; i <= 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("d\n",i);
    

    return max;
}
int main()
{
    int arr[] = {1, 5, 8, 6};
    int max1 = maximum(arr);
    printf("%d\n", max1);
    max1 = 0;
    int max2 = maximum(arr);
    printf("%d\n", max2);



    return 0;
}
