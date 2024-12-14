#include<stdio.h>
int main (){
    int num;
    printf("Enter the Your Number : ");
    scanf("%d", &num);

    if(num>=91 && num<=100){
        printf("Excellent");
    }
    else if (num>=81 && num<=90){
        printf("Very Good");
    }
    
    else if (num>=71 && num<=80){
        printf("Good");
    }
    
    else if (num>=61 && num<=70){
        printf("Can do better");
    }
    
    else if (num>=51 && num<=60){
        printf("Average");
    }
    else if (num>=41 && num<=50){
        printf("Below average");
    }
    else{
        printf(" You are Fail");
    }
    return 0;

}
    