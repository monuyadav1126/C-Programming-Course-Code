#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int r;
    printf("Enter the number : ");
    scanf("%d", &r);

    // int nfact = factorial(n);
    // int rfact = factorial(r);
    // int nrfact = factorial(n - r);

    // int ncr = nfact / (rfact * nrfact);

    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d", ncr);
    return 0;
}