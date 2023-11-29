#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    printf("Random no between 0 to 5 is %d\n", randomNumber(2));

    return 0;
}
