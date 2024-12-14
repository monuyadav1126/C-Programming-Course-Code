#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "College Wallah";
    // char* ptr = &str[0];
    char* ptr = str; // ptr now points to str[0]

    // printf("%p", ptr);
    printf("%p\n", &str[0]);
    printf("%p", str);
    return 0;
}