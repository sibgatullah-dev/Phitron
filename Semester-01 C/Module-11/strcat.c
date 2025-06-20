// Built in function to concate two string in one 
#include<stdio.h>
int main(){
    char a[101];scanf("%s",&a);
    char b[101];scanf("%s",&b);
    strcat(a,b);//a+b
    printf("%s",a);
    return 0;
}