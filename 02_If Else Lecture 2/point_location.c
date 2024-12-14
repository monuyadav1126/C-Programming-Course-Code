#include<stdio.h>
int main (){
    int x, y;
    printf("Enter the coordinates : ");
    scanf("%d %d", &x , &y);

    // if(y==0){ // lie on x-axis
    //     printf("The number is lie on X - Axis");
    // }
    // else if (x==0){ // Lie on Y - Axis
    //     printf("The number is lie on Y - Axis");
    // }
    // else{
    //     printf("The number of x and y is lie on mid point");
    // }

    if(x==0 && y==0){
        printf("The point is origin");
    }
    else if(y==0){ // lie on x-axis
        printf("Lie on X - Axis");
    }
    else if (x==0){ // lise on y-axis means x==0
        printf("Lie on Y - Axis");
    }
    else{
        printf("The points are not lies on x or y axis and not a origin");
    }    
    return 0;
}