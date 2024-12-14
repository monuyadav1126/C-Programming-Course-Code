#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        printf("The Factorial number of %d is : %d\n",i, factorial);
    }
    // printf("The Factorial number is : %d", factorial);
    return 0;
}