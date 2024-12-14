#include<Stdio.h>
int main (){

// To find a remainder by given input by the user. 
    int a, b, c;
    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number :");
    scanf("%d", &b);

     c = a % b;
    printf("The remainder when %d is divided by %d is : %d ", a, b, c);
    return 0;


// Take float input and print the fractional part of the real number .
    float x; 
    printf("\nEnter the Number ");
    scanf("%f", &x);
    int y;
    y = x;

    // x = x - y;

    float z = x -y;

    printf("The value is : %f", z);
    return 0;
}