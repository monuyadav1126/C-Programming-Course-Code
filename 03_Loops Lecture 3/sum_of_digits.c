#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    // int sum =0;
    // int ld;
    // while(n!=0){
    //     ld = n%10;
    //     sum = sum+ld;
    //     n = n/10;
    // }
    // printf("The sum of the number is : %d", sum);

    int sum=0;
    int lastDigit=0;
    for (int i = 0; n!=0; i++)
    {
        lastDigit = n % 10;

        sum = sum + lastDigit;
        n = n / 10;
    }
     printf("The sum of the number is %d",sum );
    return 0;
}