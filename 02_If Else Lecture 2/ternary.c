#include<stdio.h>
int main (){


// Ques : Take positive integer input and tell if it is even or odd    
    int n; // Create a box
    printf("Enter the Number :");
    scanf("%d", &n); // store a value in box

  // Teranary operator 
  // exp1 ? exp2 : exp3 ;

     n % 2 == 0 ? printf("Even number") : printf("Odd number ");



    // if(n%2==0){ // Even Number 
    //     printf("n=%d is a Even number", n);
    // }
    // else{ // Odd Number 
    //     printf("n = %d is a Odd number", n);
    // }
    return 0;
}