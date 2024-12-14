#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // No of line / row --> (i) ko print karta hai 
    {
        for (int j = 1; j <= n; j++) // No of column --> (j) ko print karta hai
        {

            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}