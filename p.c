#include <stdio.h>

typedef struct driver {
    char name[20];
    char dlNo[20];
    char route[20];
    int kms;
} driverDetails;

int main() {
    driverDetails driver[3];

    printf("Enter your Name: \n");
    scanf("%19s", driver[0].name); // Limit the input to 19 characters to avoid buffer overflow.

    printf("Enter your Driving Licence No.: \n");
    scanf("%19s", driver[0].dlNo);

    printf("Kms you drive already: \n");
    scanf("%d", &driver[0].kms);

    printf("Enter your Route: \n");
    scanf("%19s", driver[0].route);

    printf("%s\n", driver[0].name);
    printf("%s\n", driver[0].dlNo);
    puts(driver[0].route);
    printf("%d\n", driver[0].kms);

    return 0;
}
