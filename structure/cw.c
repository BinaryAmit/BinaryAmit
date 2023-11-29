#include <stdio.h>
#include <string.h>
 typedef struct book
{
    char name[50];
    float price;
    int noOfPages;
}Book;

int main()
{
    // typedef struct book Book ;

    Book a,b;
    struct book c;

    a.noOfPages = 100;
    a.price = 411.50;
    strcpy(a.name, "Secret Seven");

    printf("%d\n", a.noOfPages);
    printf("%f\n", a.price);
    printf("%s\n", a.name);

    return 0;
}
