// Comparing two string using dictionary alphabatical order 
#include<stdio.h>
int main(){
    char a[101];scanf("%s",&a);
    char b[101];scanf("%s",&b);
    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("Equal");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("a is small");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("b is small");
            break;
        }
        else if (a[i]<b[i])
        {
            printf("a is small");
            break;
        }
        else if (a[i]>b[i])
        {
            printf("b is small");
            break;
        }
        else if (a[i]==b[i]);
        {
            i++;
        }
        
    }
    
    return 0;
}