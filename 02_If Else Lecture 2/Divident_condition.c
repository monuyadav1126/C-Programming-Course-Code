#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    // if (num % 15 == 0 )
    // {
    //     printf("n=%d is divided by 5 and 3", num);
    // }
    // else
    // {
    //     printf("n=%d is not divided by 5 and 3", num);
    // }



    if(num%5==0){
        if(num%3==0){
            printf("The Number is divided by 5 and 3");
        }
        else{
            printf("The Number is not divided by 5 and 3");
        }
    }
    else{
        printf("The Number is not divided by 5 and 3");
    }
    return 0;
}