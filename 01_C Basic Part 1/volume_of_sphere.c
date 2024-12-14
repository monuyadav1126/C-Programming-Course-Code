#include<stdio.h>
int main(){
    // int r=3;
    // float v=4*r*r*r;
    // v=(v*3.14)/3;
    // printf("%f", v);
    // return 0;


    int r;
    printf("Enter the radius :");
    scanf("%d", &r);

    float v=(4*3.14*r*r*r)/3;
    // v=v/3;
    printf("The volume of sphere : %f", v);
    return 0;
}