#include<stdio.h>
int main (){
    int a, b, c;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);

    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Valid tringle");
    }
    else{
        printf ("Invalid Triangle");
    }
    return 0;
}