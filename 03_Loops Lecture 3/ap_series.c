#include<stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
// for 1 3 5 7 9 11........nth 
    // for (int i=1; i<=2*n-1; i=i+2){
    //     printf("%d ", i);
    // }


    //for 4 7 10 13 16....... nth
    // for (int i=4; i<=3*n+1; i=i+3){
    //     printf("%d ", i);
    // }


// Find Ap series without maths 
int a = 4;
    for (int i=0; i<=n; i++){
        printf("%d ", a);
        a = a+3;
    }


// Display this AP - 100 97 94 91 ....... upto to all terms which are positive .

// int a = 100;
//     for (int i = 1; i<=n; i++){
//         printf("%d ", a);
//         a = a-3;
//     }



// int a = 100;
//     for (int i = 1; a>0; i++){
//         printf("%d ", a);
//         a = a-3;
//     }


  
    return 0;
}