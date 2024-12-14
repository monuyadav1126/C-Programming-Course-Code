#include<stdio.h>
int decreasing(int n){
    if (n==1) return 1;
    printf("%d\n",n);
    decreasing(n-1);
    return 1;
}
int main (){
    int n ;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int num = decreasing(n); 
    printf("%d",num);
    return 0;
}