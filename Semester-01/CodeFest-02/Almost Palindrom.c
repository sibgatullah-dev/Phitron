#include<stdio.h>
#include<string.h>
int main(){
   int tc;scanf("%d",&tc);
   while (tc--)
   {
    char s[1002];scanf("%s",s);
    int len = strlen(s);

    int f[26]={0};
    for (int  i = 0; i < len; i++)
    {
        f[s[i]-'a']++;
    }

    int odd =0;
    for (int i = 0; i < 26; i++)
    {
        if (f[i]%2 != 0)
        {
            odd++;
        }
        
    }

    if (odd>1)
    {
       printf("%d\n",odd-1);
    }else{
        printf("%d\n",0);
    }
    
   }
    
   return 0;
}