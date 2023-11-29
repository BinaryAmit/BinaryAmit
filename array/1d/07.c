#include <stdio.h>

int main()
{
    int arr[4] = {5, 6, 9, 3};
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < 4; i++)
    {

        if (i % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    int diff = evenSum - oddSum;
    printf("The difference between Even indexed and Odd indexed is %d\n",diff);
    

    return 0;
}
