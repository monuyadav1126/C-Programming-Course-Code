#include<stdio.h>
void increasing(int n){
    if (n==0) return; // Base case
    increasing(n-1); // Function Call
    printf("%d\n",n); // Code
    return;
}
int main (){
    int n ;
    printf("Enter the Number : ");
    scanf("%d", &n);
    increasing(n);  // Function Call
    return 0;
}