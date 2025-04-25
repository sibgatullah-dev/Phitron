//Built in function to get the length of a string .
#include<stdio.h>
int main(){
    char s[101];scanf("%s",&s);
    int length_of_s= strlen(s);
    printf("%d",length_of_s);
    return 0;
}