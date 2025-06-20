#include<stdio.h>
int main(){

    char s[101];
    scanf("%s",&s);
    int count=0;
    for (int i = 0; s[i] != '\0' ; i++)
    {
        count++;
    }
    printf("The length of the string is %d",count);

    return 0;
}