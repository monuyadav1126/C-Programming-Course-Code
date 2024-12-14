#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    if(num%5==0 || num%3==0){
        if(num%15!=0){
            printf("The number is divided by 3 or 5 but not divided by 15 number ");
        }
        else{
            printf("The number is divided by 3 or 5 and also by 15 number");
        }

    }
    else{
        printf ("The Number is not divided by 3 or 5.");
    }



    return 0;
}