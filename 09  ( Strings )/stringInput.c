#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter you string : ");

    // scanf("%s", str); // Only first word will be considered
    scanf("%[^\n]s", str); // Only first word will be considered
    //gets(str); // Entire sentence can be input

    // puts(str);
    printf("%s", str);


    // char ch[100];
    // printf("Enter a string");
    // scanf("%c", &ch);
    // printf("%c\n", ch);

    // char str[100];
    // printf("Enter a string");
    // scanf("%s", str);
    // printf("%s\n", str);

    // char sentence[100];
    // printf("Enter a string");
    // fgets(sentence, sizeof(sentence), stdin);
    // printf("%s", sentence);



}