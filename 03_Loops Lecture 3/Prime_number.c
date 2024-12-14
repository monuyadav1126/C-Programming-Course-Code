#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a = 0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(n==1 || n==0) printf("The number is composite");
    else if (a==1) printf("Not prime");
    else printf(" Prime number"); 


    return 0;
}