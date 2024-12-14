#include<stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int p=n;
    int reverse = 0;
    for (int i=0; n!=0; i++){

        //  reverse =(n%10);
        // n=n/10;
        // printf("%d",reverse);


        reverse = reverse * 10;
        reverse =reverse + (n%10);
        n=n/10;
    }
     if(reverse == p){
        printf("Given number is palindrome\n");

    }
    else{
        printf("Not palindrome\n");
    }
    printf(" The reversable value is : %d",reverse);
    return 0;
}