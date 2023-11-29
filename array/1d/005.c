#include <stdio.h>
void checkPal(int arr[], int size)
{
   int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            count++;
        }
    }
    if (count==0)
    {
        printf("It is Palindrome\n");
        
    }else{

        printf("It is not Palindrome\n");
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkPal(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    return 0;
}
