#include <stdio.h>
struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

int main()
{
    struct Student Students[3] = {{.name = "Aman", .rollNumber = 1, .marks = 98},
                                  {.name = "Darshan", .rollNumber = 2, .marks = 99.06},
                                  {.name = "Raval", .rollNumber = 3, .marks = 59.96}};

    for (int i = 0; i <= 2; i++)
    {
        printf("\n\nStudent %d details : \n",i+1);
        
        printf("Name : %s\nRoll No. : %d\nMarks :%0.2f\n\n\n", Students[i].name, Students[i].rollNumber, Students[i].marks);
    }
    return 0;
}
