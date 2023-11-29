#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count = 0;
    int num;
    printf("Enter any number :\n");
    scanf("%d", &num);
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 8; k++)
            {
                int tripletSum = arr[i] + arr[j] + arr[k];
                if (tripletSum == num)
                {
                    count++;
                }
                
            }
        }
    }
    printf("No of Triplets : %d\n", count);

    return 0;
}
