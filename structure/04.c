#include <stdio.h>
struct person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    struct person person[] = {{"Trq",19,10.59},{"Trq",0,10.59},{"Trq",19,10.59}};
                 

    // printf("Name : %s\nAge : %d\nHeight : %.2f \n", person1.name, person1.age, person1.height);
    // printf("Name : %s\nAge : %d\nHeight : %.2f \n", person2.name, person2.age, person2.height);
    // printf("Name : %s\nAge : %d\nHeight : %.2f \n", person3.name, person3.age, person3.height);

    for (int i = 0; i <= 2; i++)
    {
        printf("Name : %s\nAge : %d\nHeight : %.2f \n\n\n", person[i].name, person[i].age, person[i].height);
    }

    // printf("Name : %s\nAge : %d\nHeight : %.2f \n\n\n", person1.name, person1.age, person1.height);

    return 0;
}
