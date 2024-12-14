#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int gdc(int a, int b)
{
    int hcf;
    for (int i = min(a,b); i>1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a;
    printf("Enter the 1st number : ");
    scanf("%d", &a);
    int b;
    printf("Enter the 2nd number b : ");
    scanf("%d", &b);

    int hcf = gdc(a, b);
    printf("The hcf of %d and %d is : %d", a, b, hcf);
    return 0;
}