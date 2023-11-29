#include <stdio.h>
int maximum(int arr[])
{
    int max = arr[0];
    for (int i = 1; i <= 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
int main()
{
    int arr[] = {1, 5, 8, 6};
    int y = maximum(arr);
    printf("%d\n", y);

    return 0;
}
