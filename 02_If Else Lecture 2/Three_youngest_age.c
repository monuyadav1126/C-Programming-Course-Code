#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the age of Ram : ");
    scanf("%d", &a);
    printf("Enter the age of Shyam : ");
    scanf("%d", &b);
    printf("Enter the age of Ajay : ");
    scanf("%d", &c);

    if(a<b){
        if(a<c){
            printf("Ram is youngest and age is : %d years",a);
        }
        else{ // a > c
            printf("Ajay is youngest and age is : %d years ",c);
        }
    }
    else{ // a > b
        if(b<c){
            printf("Shyam is youngest and age is : %d years",b);
        }
        else{ // b > c
            printf("Ajay is youngest and age is : %d years",c);
        }
    }







    // if (a <= b && a <= c)
    // {
    //     printf("Ram is Youngest ");
    // }
    // else if (b <= a && b <= c)
    // {
    //     printf("Shyam is Youngest " );
    // }
    // else if (c <= b && c <= a)
    // {
    //     printf("Ajay is Youngest");
    // }
    // else
    // {
    //     printf("Invalide Age");
    // }
    return 0 ;
}