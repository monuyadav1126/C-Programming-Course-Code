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
    int reverse=0;
    for (int i = 0; n!=0; i++)
    {
        lastDigit = n % 10;

        sum = sum + lastDigit;
        reverse = reverse * 10;
        reverse =reverse + (n%10);
        n = n / 10;
        
   
    }
     printf("The sum of the number is %d\n",sum );
     printf("The reversable value is : %d\n",reverse);
     printf("The sum of sum and reverse value is %d", sum + reverse);
    return 0;
}