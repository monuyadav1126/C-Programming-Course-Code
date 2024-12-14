#include<stdio.h>
int main (){
    int principal, rate, time;
    printf("Enter the Principal  : ");
    scanf("%d", &principal);

    printf("Enter the rate : ");
    scanf("%d", &rate);

    printf("Enter the time :");
    scanf("%d", &time );

     float si = (principal * rate * time )/100;
    printf("The Simpal interest is : %f", si);
    return 0;
}