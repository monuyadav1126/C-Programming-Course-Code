
// wap to count digits of a given number 


#include<stdio.h>
int main (){
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    // int count=0;
    // while(n!=0){
    //     n = n / 10;
    //     count++;
    // }
    // printf("The number of digits are %d", count);



    int count=0;
    for (int i=0; n!=0; i++){
        n = n/10;
        count++;

    }
    printf("The number of digits are %d", count);

    return 0;
}