#include <stdio.h>
#include <string.h>
struct Books
{
    char title[51];
    char author[31];
    int year;
};

int main()
{
    // struct Book Book;
    // strcpy(Book.title, "Introduction to Programming");
    // strcpy(Book.author, "John Smith");
    // Book.year = 2022;

    struct Books Book1 = {
                     .title = "Introduction to Programming",
                     .author = "John Smith",
                     .year = 2022},
                 Book2 = {.title = "Introduction to Programming", .author = "John Smith", .year = 2023};

    printf("Title : %s \n", Book1.title);
    printf("Author : %s \n", Book1.author);
    printf("Year : %d \n", Book2.year);

    return 0;
}
