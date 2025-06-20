#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    gets(s);
    fgets(s,20,stdin);// Standered way to take string input with space
    printf("%s",s);
    return 0;
}