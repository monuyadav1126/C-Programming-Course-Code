#include<stdio.h>
void func(int a[]){
    // a[0] = 10;
    // return;

    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    return;
}
int main (){
    // int size;
    // printf("Enter the size of array : ");
    // scanf("%d", &size);

    // int arr[size];
    // for(int i=0; i<size; i++){
    //     printf("Enter the element in %d index : ", i);
    //     scanf("%d", &arr[i]);
    // }
    // printf("The array element is : ");
    // for(int i=0; i<size; i++){
    //     printf("%d ", arr[i]);
    // }

    int arr[5]={1,2,3,4,5};
    printf("%d %d\n", arr[0], arr[1]);

    func(arr);
    printf("%d %d\n", arr[0], arr[1]);
    // printf("%d\n", arr[0]);
    return 0;

}