//NO codes right now
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{

    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("the guess number is %d\n", number);


    do {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);

        if(guess>number) {
            printf("lower number please\n");
        }

        else if(guess<number) {
            printf("higher number please!\n");
        }
        else {
            printf("you guessed the number in %d attemt\n",nguesses);
        }

        nguesses++;
    } while(guess!=number);




    return 0;
}
