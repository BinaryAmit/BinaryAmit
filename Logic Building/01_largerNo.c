#include <stdio.h>

int main()
{
    int firstNo;
    int secondNo;
    printf("Enter first Number\n");
    scanf("%d", &firstNo);
    printf("Enter second Number\n");
    scanf("%d", &secondNo);

    if (firstNo > secondNo)
    {
        printf("Greater No is %d\n", firstNo);
    }
    else if (secondNo>firstNo)
    {
        printf("Greater No is %d\n", secondNo);
    }
    else
    {
        printf("Both the numbers are equal\n");
        
    }
    

    return 0;
}
