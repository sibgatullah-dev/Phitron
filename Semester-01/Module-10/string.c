#include<stdio.h>
int main(){
    char s[10];
    scanf("%s",&s);
    printf("%s\n",s);
    printf("%d",s[5]);//Null character \0 . its ascii value is 0
    return 0;
}