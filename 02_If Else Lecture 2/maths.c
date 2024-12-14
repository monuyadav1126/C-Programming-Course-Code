#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the Value of x1 : ");
    scanf("%d", &x1);
    printf("Enter the Value of y1 : ");
    scanf("%d", &y1);
    printf("Enter the Value of x2 : ");
    scanf("%d", &x2);
    printf("Enter the Value of y2 : ");
    scanf("%d", &y2);
    printf("Enter the Value of x3 : ");
    scanf("%d", &x3);
    printf("Enter the Value of y3 : ");
    scanf("%d", &y3);

    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);

    if(m1==m2){
        printf("All three points fall on one straight line");

    }
    else{
        printf("Not a straight Line");
    }
    return 0;
}