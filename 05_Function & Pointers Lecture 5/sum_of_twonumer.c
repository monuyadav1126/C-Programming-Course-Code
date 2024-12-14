#include <stdio.h>
int Add(int x , int y){
    return x*y;
}
int main()
{
    int a;
    printf("Enter the first number : ");
    scanf("%d", &a);

    int b;
    printf("Enter the second number : ");
    scanf("%d", &b);

    int sum = Add(a,b);
    printf("%d",sum);
    return 0;
}