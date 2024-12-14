#include <stdio.h>
int main()
{
    // int b = 10;
    // int h = 10;
    // int area = (0.5) * (b * h);
    // printf("%d", area);
    // return 0;

    int b;
    int h;
    printf("Enter the base : ");
    scanf("%d", &b);

    printf("Enter the height : ");
    scanf("%d", &h);

    float area = (b * h)/2;
    // area=area/2;
    printf("Area of triangle is : %f", area);
    return 0;
}