#include<stdio.h>
int fact(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact = fact * i;
    }
    return fact;
}
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int factorials = fact(n);
    printf("The Factorials of %d is : %d", n, factorials);
    return 0;
}