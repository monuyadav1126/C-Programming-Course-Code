#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);

    // For Normal Number Print in rectangle form
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    // For Even Number............................
    // for (int i = 1; i <= n; i++)
    // {
    // int a=2;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ",a);
    //         a = a + 2;
    //     }
    //     printf("\n");
    // }

    // For ODD Number.............................

     for (int i = 1; i <= n; i++)
    {
    int a=1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}