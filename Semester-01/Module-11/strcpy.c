// Built in function to copy one string into another
#include<stdio.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    strcpy(a,b);
    printf("%s %s",a,b);
    return 0;
}