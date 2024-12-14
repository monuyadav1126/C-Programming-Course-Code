#include<stdio.h>
int powerLog(int a, int b){
    if(b==0) return 1;
    int x = powerLog(a, b/2);
    if(b%2==0) return x * x;
    else return x * x * a;
}
int main (){
    int a;
    printf("Enter the Base : ");
    scanf("%d", &a);
    int b;
    printf("Enter the Power : ");
    scanf("%d", &b);
    int p = powerLog(a,b);
    printf("The %d raised to the power %d is : %d ", a, b, p);
    return 0;
}