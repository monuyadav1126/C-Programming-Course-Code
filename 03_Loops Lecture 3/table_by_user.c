#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i=n; i<=n*10; i=i+n){
            printf("%d\n", i);

    }
    return 0;
}