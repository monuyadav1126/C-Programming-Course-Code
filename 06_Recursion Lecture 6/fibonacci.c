#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    int result = fibonacci(n-1) + fibonacci(n-2);
    return result;
}
int main(){
    int n; 
    printf("Enter the number : ");
    scanf("%d",&n);
    int fibo_num= fibonacci(n);
    printf("%d",fibo_num);
    return 0;
}