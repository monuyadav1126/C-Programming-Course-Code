#include<stdio.h>
void tower (int n , char s, char h, char d){
    if (n==0) return;
    tower(n-1, s, d, h);
    printf("%c --> %c\n", s, d);
    tower(n-1, h, s, d);
    return;
}
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    return 0;
}




// #include<stdio.h>
// void tower(int n , char A, char B, char C){
//     if(n==0) return;
//     tower(n-1, A, C, B);
//     printf("%c --> %c\n", A, C);
//     tower(n-1, B, A, C);

//     return;
// }
// int main (){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     tower(n, 'A', 'B', 'C');
//     return 0;
// }