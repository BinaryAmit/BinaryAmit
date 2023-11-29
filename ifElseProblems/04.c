#include <stdio.h>

int main()
{
    int score;
    printf("Enter your score : ");
    scanf("%d", &score);
    if (score>=90)
    {
        printf("You are 'A' Grade");
    }
    else if (score>=80)
    {
        printf("You are 'B' Grade");
        
    }
    else if (score>=70)
    {
        printf("You are 'C' Grade");
        
    }
    else if (score>=60)
    {
        printf("You are 'D' Grade");
        
    }
    else if (score>=0)
    {
        printf("You are 'F' Grade");
        
    }
    else
    {
        printf("Please enter the correct Score!!!");
        
    }
    

        return 0;
}
