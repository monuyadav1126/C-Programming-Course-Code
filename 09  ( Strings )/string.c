#include<stdio.h>
#include<string.h>
int main(){
    // int \0;
    char str[] = "Hello, World!";
    int i=0;
    while(str[i]!='\0'){

        // To print str there are four type
        // arr[i]
        // *(arr+i)
        // *(i+arr)
        // i[arr]

        printf("%c", str[i]);
        // printf("%c", i[str]);
        // printf("%c", *(str+i));
        // printf("%c", *(i+str));
        i++;
    }

    char str1[] = "college wallah best";
    // printf("%s", str1);
    puts(str1);
}