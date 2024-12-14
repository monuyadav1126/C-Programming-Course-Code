#include<stdio.h>
int main(){

    int l, b;
    printf("Enter the Length : ");
    scanf("%d", &l);

    printf("Enter the Base : ");
    scanf("%d", &b);
    int area = l * b;
    int perimeter = 2 * (l+b);

    if(area>perimeter){
        printf("The area of rectangle is greater then its perimeter");
    }
    else if (area<perimeter)
    {
        printf("The area of rectangle is less then its perimeter");
    }
    
    else{
        printf("The area of rectangle and its perimeter is equal");
    }
    
    return 0;
}