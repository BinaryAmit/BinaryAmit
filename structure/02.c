#include <stdio.h>
struct person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    struct person person[] = {{.name = "Trq", .age = 19, .height = 10},
                  {.name = "TAriq", .age = 20, .height = 24},
                  {.name = "Amit", .age = 19, .height = 45}};

    // printf("Name : %s\nAge : %d\nHeight : %.2f \n", person1.name, person1.age, person1.height);
    // printf("Name : %s\nAge : %d\nHeight : %.2f \n", person2.name, person2.age, person2.height);
    // printf("Name : %s\nAge : %d\nHeight : %.2f \n", person3.name, person3.age, person3.height);

    for (int i = 0; i <= 2; i++)
    {
        printf("Name : %s\nAge : %d\nHeight : %.2f \n\n\n", person[i].name, person[i].age, person[i].height);
    }

    // printf("Age : %d\nHeight : %.2f \n\n\n", person[i].name, person[i].age, person[i].height);

    return 0;
}
