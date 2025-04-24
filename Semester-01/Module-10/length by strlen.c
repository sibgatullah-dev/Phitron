#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    scanf("%s",&s);

    int sz=strlen(s);// Built in function for counting length of a string

    printf("%d",sz);
    return 0;
}