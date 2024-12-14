#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
  	if(a<=9 || b<=9){
        if(a==0 || b==0){
            printf("zero\n");
        }
        if(a==1|| b==1){
            printf("one\n");
        }
        if(a==2 || b==2){
            printf("two\n");
        }
        if(a==3 || b==3){
            printf("three\n");
        }
        if(a==4 || b==4){
            printf("four\n");
        }
        if(a==5 || b==5){
            printf("five\n");
        }
        if(a==6 || b==6){
            printf("six\n");
        }
        if(a==7 || b==7){
            printf("seven\n");
        }
        if(a==8 || b==8){
            printf("eight\n");
        }
        if(a==9 || b==9){
            printf("nine\n");
        }
  	}
  	else if(a>9 || b>9){
        if(a%2==0 || b%2==0){
            printf("even");
        }
        if(a%2!=0 || b%2!=0){
             printf("odd");
        }
  	}

    return 0;
}

