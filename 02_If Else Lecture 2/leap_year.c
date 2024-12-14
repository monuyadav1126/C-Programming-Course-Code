#include<stdio.h>
int main (){
    int year ;

    printf("Enter the Year Number : ");
    scanf("%d", &year);

    if(year%4==0 || year%400==0){
        printf("%d is a Leap Year ", year);
    }
    else{
        printf("%d is a not Leap year ", year);
    }
    return 0;
}