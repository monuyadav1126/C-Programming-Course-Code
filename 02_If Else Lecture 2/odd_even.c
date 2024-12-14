#include<stdio.h>
int main (){


// Ques : Take positive integer input and tell if it is even or odd    
    int n; // Create a box
    printf("Enter the Number :");
    scanf("%d", &n); // store a value in box

    if(n%2==0){ // Even Number 
        printf("n=%d is a Even number", n);
    }
    else{ // Odd Number 
        printf("n = %d is a Odd number", n);
    }




 // Take positive integer input and tell if it is divisible by 5 or not.
    //  int n; // Create a box
    // printf("Enter the Number :");
    // scanf("%d", &n); // store a value in box

    if(n%5==0){ // This number is divided by 5
        printf("\nn=%d is divided by 5", n);
    }
    else{ // This number is not divided by 5
        printf("n = %d is not divided by 5", n);
    }
    return 0;
}