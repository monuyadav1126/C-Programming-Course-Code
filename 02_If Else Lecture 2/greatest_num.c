#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the fisrt number : ");
    scanf("%d", &a);
    printf("Enter the fisrt number : ");
    scanf("%d", &b);
    printf("Enter the fisrt number : ");
    scanf("%d", &c);

    if(a>b){ //a bada hai b se
        if(a>c){
            printf("%d is greatest", a);
        }
        else{ // a < c hai 
            printf("%d is greatest",c);
        }
    }
    else{ // a < b hoga
        if(b>c){
            printf("%d is greatest",b);
        }
        else{ // b < c hai
            printf("%d greatest",c);
        }
    }
    return 0;
}