#include <stdio.h>
int func1()
{
    return 34;
}
int main()
{
    int val = func1();
    // printf("The value of func1 is %d", func1());
    printf("The value of func1 is %d", val);

    return 0;
}
