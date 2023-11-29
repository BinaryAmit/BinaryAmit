#include <stdio.h>
int number(int arr[], int size)
{
    int count=0;
    printf("No greater than 5 are : ");
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 5)
        {
            printf("%d ",arr[i]);
            
            count++;
        }
        
    }
        printf("\n");
    return count;
}
int main()
{
    int arr[] = {1, 5, 7, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int y = number(arr, size);
    printf("%d\n", y);

    return 0;
}
