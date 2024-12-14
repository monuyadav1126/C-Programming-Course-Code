#include<stdio.h>
int main(){

    // Interger takes only 4 Bytes means 32 bits. 
    int arr[5] = {1,2,3,4,5};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);

    // Character takes only 1 Bytes means 4 Bits.
    char brr[5] = {'a', 't', 'l', 'a', 's'};
    printf("\n%p\n", &brr[0]);
    printf("%p\n", &brr[1]);
    printf("%p\n", &brr[2]);
    printf("%p\n", &brr[3]);
    printf("%p\n", &brr[4]);
    return 0;
}