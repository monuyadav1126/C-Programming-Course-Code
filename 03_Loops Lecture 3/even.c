#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the number : ");
    scanf("%d", &n);



    for(i=1; i<=n; i++){
        // For even number 
        if(i%2!=0){
            // printf("%d\n", i);
            continue;
        }
        printf("%d ", i);


        // For odd number 
        if(i%2==0){
            // printf("%d\n", i);
            continue;
        }
        printf("%d ", i);


    }
    return 0;
}