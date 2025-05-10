#include<stdio.h>
#include <string.h>

int is_palindrome(char s[]){
    int len = strlen(s);
    int l = 0,r = len-1;
    while (l<=r)
    {
        if (s[l]!=s[r])
        {
            return 0;
        }
        l++;r--;
    }
    return 1;
}
int main(){
    char s[1001];
    scanf("%s",s);
    
    
    if (is_palindrome(s))
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    
    return 0;
}