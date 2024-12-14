#include<stdio.h>
int main (){
   int a;
   printf("Enter the nunber : ");
   scanf("%d",&a);
   int b;
   printf("Enter the nunber : ");
   scanf("%d",&b);
   int c;
   printf("Enter the nunber : ");
   scanf("%d",&c);
   int d;
   printf("Enter the nunber : ");
   scanf("%d",&d);

   if (a>b && a>c && a>d) printf("a is greater %d",a);
   else if  (b>a && b>c && b>d) printf("b is greater %d",b);
   if (c>b && c>b && c>d) printf("c is greater %d",c);
   else printf("d is greater %d",d);
    return 0;
}