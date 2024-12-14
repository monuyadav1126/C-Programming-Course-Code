// Count the number of element in given array greater than a given number x.

#include<stdio.h>
int main (){
    int size, count=0 ;
    int x = 4;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter the element in %d index : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The number of element is which greater then x : ");
    for(int i=0; i<size; i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}