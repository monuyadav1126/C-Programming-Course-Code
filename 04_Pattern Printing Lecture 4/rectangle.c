#include<stdio.h>
int main (){
    int n,m;
    printf("Enter the row number : ");
    scanf("%d", &n);
    printf("Enter the column number : ");
    scanf("%d", &m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
           if(i==1 || i==n || j==m || j==1){
            printf("* ");
           }
           else{
            printf("  ");
           }
        }
        printf("\n");
    }
    return 0 ;
}