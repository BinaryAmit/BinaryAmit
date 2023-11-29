#include <stdio.h>
#include <string.h>
typedef struct Test
{
    char name[20];
    int age;
    int test_matches;
    int avg_runs;

} test;
int main()
{
    test cricketer[3];
    
    strcpy(cricketer[0].name, "Virat kohli");
    cricketer[0].age = 30;
    cricketer[0].test_matches = 50;
    cricketer[0].avg_runs = 100;
    
    strcpy(cricketer[1].name, "Rohit Sharma");
    cricketer[1].age =130;
    cricketer[1].test_matches = 50;
    cricketer[1].avg_runs = 100;

    strcpy(cricketer[2].name, "Mohammad Shami");
    cricketer[2].age = 30;
    cricketer[2].test_matches = 50;
    cricketer[2].avg_runs = 100;


    for (int i=0; i < 3; i++){
        printf("Name : %s\n", cricketer[i].name);
    printf("Age : %d\n",cricketer[i].age);
    printf("Test matches : %d\n",cricketer[i].test_matches);
    printf("Average Runs : %d\n",cricketer[i].avg_runs);
    printf("\n");
    
    }

    
    



    // printf("Name : %s\n", cricketer[0].name);
    // printf("Enter name : \n");
    // char name0[20];

    // scanf("%s", &name0);

    // strcpy(virat.name, name0);
    // printf("Name : %s\n", virat.name);

    return 0;
}
