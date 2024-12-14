#include<stdio.h>
int main(){
    // int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8; // first preority of * and / is same but calculate left to right 
    // printf(" The number of i is : %d", i);
    // return 0 ; 


    int i=2, j=3, k, l;
    float a, b;

    k = i / j * j;
    l = j / i * i;
    a = i / j * j;
    b = j / i * i;

    printf("%d \n%d \n%f \n%f ", k, l, a, b);

    float z = 22.0/7;
    printf("%f",z);
    return 0;

}