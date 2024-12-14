#include <stdio.h>
int factorial(int n)
{
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // return fact;
    if (n==1) return 1; //Base Case
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("The factorial is :  %d", fact);
}