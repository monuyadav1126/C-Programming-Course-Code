#include<stdio.h>
#include<string.h>
int main(){
    int size =0;
    int i=0;
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]s", str);

    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d", size);
    // puts(str); // Automatically \n bhi de deta hai
    return 0;
}