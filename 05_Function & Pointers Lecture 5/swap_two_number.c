#include <stdio.h>
int swap(int a, int b)
{
    // int temp = a;
    // a = b;
    // b = temp;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a is : %d\n", a);
    printf("The value of b is : %d", b);
    return (a,b);
}
int main()
{
    int a;
    printf("Enter the number of a : ");
    scanf("%d", &a);
    int b;
    printf("Enter the number of b : ");
    scanf("%d",&b);
    swap(a, b); // Function Calling


    // int temp=a;
    // a = b;
    // b = temp;
    // printf("The value of a is : %d\n",a);
    // printf("The value of b is : %d",b);
    return 0;
}