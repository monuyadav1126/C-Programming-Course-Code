#include <stdio.h>
int main()
{
    // int r = 3;
    // float area = 3.14 * r * r;
    // printf("Area of circle is : %f", area);


    int r;
    printf("Enter the radius :");
    scanf("%d", &r);

    float area = 3.14*r*r;
    printf("The area of circle is : %f", area);
    return 0;
}