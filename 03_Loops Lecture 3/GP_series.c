#include<stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    // int i, a=1;
    // for(i=1 ; i<=n; i++){
    //     printf("%d ", a);
    //     a =a*3;



      // Display this GP - 100 50 25 .... ....... upto n terms.

    float a=100;
    for(int i=0; i<=n; i++){
        printf("%f ", a);
        a = a/2;
    }

    return 0;
}