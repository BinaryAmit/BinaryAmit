#include <stdio.h>

int main()
{
    int sum = 0, n=1;
             printf("Enter positive no. to add : \n");
             printf("Enter 0 to terminate! ");
   
    
     while (n > 0)
        {
            scanf("%d", &n);
            sum += n;
        }
    printf("%d",sum);
    

    return 0;
}
