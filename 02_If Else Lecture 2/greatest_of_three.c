#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the fisrt number : ");
    scanf("%d", &a);
    printf("Enter the fisrt number : ");
    scanf("%d", &b);
    printf("Enter the fisrt number : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a=%d is greater then %d and %d ", a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("b=%d is greater then %d and %d ", b, a, c);
    }
    else if (c > a && c > b)
    {
        printf("c=%d is greater then %d and %d ", c, a, b);
    }
    else {
        printf("Invalide Number please provide a different number .");
    }

    return 0;
}