///doubt to be fix.....
#include <stdio.h>
#include <string.h>
typedef struct driver
{
    char name[20];
    char dlNo[20];
    char route[20];
    int kms;

} driverDetails;

int main()
{
    driverDetails driver[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter details of Driver %d\n", i + 1);

        printf("Enter your Name : \n");
        gets(driver[i].name);

        printf("Enter your Driving Licence No. : \n");
        gets(driver[i].dlNo);

        printf("Enter your Route : \n");
        gets(driver[i].route);

        printf("kms you drive already : \n");
        scanf("%d ", &driver[i].kms);
        getchar();
        

        printf("\n");
        
    }
    //fix

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", driver[i].name);
        printf("%s\n", driver[i].dlNo);
        puts(driver[i].route);
        printf("%d\n", driver[i].kms);
    }

    return 0;
}
