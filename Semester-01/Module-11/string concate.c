#include<stdio.h>
int main(){
    char a[101];scanf("%s",&a);
    char b[101];scanf("%s",&b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    for (int i = 0; i <= lenB ; i++)
    {
        a[i+lenA]=b[i];
    }
    printf("%s",a);
    
    return 0;
}