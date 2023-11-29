#include <stdio.h>
struct Rectangles
{
    float length;
    float width;
};

float calculateArea(float a, float b)
{
    return a * b;
}

int main()
{
    struct Rectangles rectangle[] = {{5, 10}, {7, 5}, {56, 45}, {8, 64}, {74, 98}};
    // printf("%0.2f", rectangle[1].length);
    // scanf("%f",&rectangle[1].length);
    float result = calculateArea(rectangle[1].length, rectangle[1].width);
    printf("%0.2f", result);

    return 0;
}
