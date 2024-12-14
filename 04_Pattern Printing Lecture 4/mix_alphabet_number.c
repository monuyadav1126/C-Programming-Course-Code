#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            char letter = 'A';
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", letter);
                letter++;
            }
        }
        printf("\n");
    }

    return 0;
}