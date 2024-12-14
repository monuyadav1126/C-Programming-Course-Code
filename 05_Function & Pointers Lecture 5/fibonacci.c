#include<stdio.h>
int fibo (int x){
    int a=1;
    int b=1;
    int sum=1;
    for (int i=1; i<=x-2; i++){
        sum = a+b;
        a=b;
        b=sum;
        printf("The %dth Fibonacci Number is : %d\n", i, sum);
    }
    return sum;
}
int main (){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}