#include <stdio.h>
void solution(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }
}
int main()
{
    int arr[] = {1, 4, 8, 6, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    solution(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
