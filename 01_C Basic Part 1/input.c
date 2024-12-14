#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the number x and y value : ");
    scanf("%d %d", &x, &y);

    // printf("Enter the first number is :");
    // scanf("%d", &x);
    // printf("Enter the second number is :");
    // scanf("%d", &y);

    // int z = x + y;
    // printf("Your Entered number is : x=%d y=%d",x , y);
    // printf("The sum of %d and %d is : %d",x,y,z);


     int z = x / y;
    printf("The divide value is %d",z); 
    return 0;
}