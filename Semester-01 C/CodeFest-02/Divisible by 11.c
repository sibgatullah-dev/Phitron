#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char N[102];scanf("%s",N);

    int len = strlen(N);
    int even=0;
    int odd=0;

    for (int i = 0; i < len; i++)
    {
        int digit = N[len-1-i]-'0';
        if (i%2==0)
        {
            odd+=digit;
        }
        else if (i%2!=0)
        {
            even+=digit;
        }
        
    }
    int difference = abs(even-odd);
    if (difference%11==0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
}