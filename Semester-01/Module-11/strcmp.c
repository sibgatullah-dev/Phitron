// strcmp function which gives value less then 0 if a is small value greater then 0 if b  is small and value 0 if both are same 
#include<stdio.h>
int main(){
    char a[101],b[101];
    scanf("%s %s",&a,&b);

    int val = strcmp(a,b);

    if (val < 0)
    {
        printf("A is small");
    }
    else if (val > 0)
    {
        printf("B is small ");
    }
    else if (val == 0)
    {
        printf("Equal");
    }
    
    
    return 0;
}