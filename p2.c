#include<stdio.h>
#include<string.h>

typedef struct driver
{
    char name[20];
    char dlNo[20];
    char route[20];
    int kms;

} driverDetails;
int main(){
    driverDetails driver[1];

    printf("Enter name :\n");

    gets(driver[0].name);
    // strcpy(driver[0].name,gets(driver[0].name));
    // scanf("%s",&driver[0].name);
    printf("Enter dlNo :\n");
    // scanf("%s",&driver[0].dlNo);
    gets(driver[0].dlNo);
    
    
    printf("Enter route :\n");
    // scanf("%s",&driver[0].route);
    gets(driver[0].route);
    
    



    printf("Name : %s\n",driver[0].name);
    printf("dlno : %s\n",driver[0].dlNo);
    printf("route : %s\n",driver[0].route);

    
    
    
    
    
     return 0;
}
