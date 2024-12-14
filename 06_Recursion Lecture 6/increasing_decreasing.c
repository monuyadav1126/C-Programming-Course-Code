#include<stdio.h>
void increasing_decreasing(int n){
    if (n==0) return; // Base case
    printf("%d\n",n);
    increasing_decreasing(n-1); // Function Call
    printf("%d\n",n); // Code
    return;
}
int main (){
    int n ;
    printf("Enter the Number : ");
    scanf("%d", &n);
    increasing_decreasing(n);  // Function Call
    return 0;
}