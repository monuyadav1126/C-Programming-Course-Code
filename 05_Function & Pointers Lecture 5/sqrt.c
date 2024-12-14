#include <stdio.h>
#include <math.h>
int minimum(int a, int b)
{
    int min=a;
    if (a > b) min=b;
    return min;
}
int main()
{
    int a;
    printf("Enter the first number : ");
    scanf("%d", &a);
    int b;
    printf("Enter the second number : ");
    scanf("%d", &b);

    // To find Square root of any number
    // int root =sqrt(a);
    // printf("The square root is : %d",root);


    // To Find power value of any number
    // int q=pow(3,3);
    // printf("%d",q);

    // To Find min value 
    int min = minimum(a, b);
    printf("%d", min);

    return 0;
}