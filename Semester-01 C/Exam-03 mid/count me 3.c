#include<stdio.h>
int main(){
    int t;scanf("%d",&t);
    while (t--)
    {
        char s[10001];scanf("%s",s);
        int len = strlen(s);
        int cap = 0,sm = 0,num = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i]>64 && s[i]<91)
            {
                cap++;
            }
            else if (s[i]>96 && s[i]<123)
            {
                sm++;
            }
            else if (s[i]>47 && s[i]<58)
            {
                num++;
            }
            
        }
        printf("%d %d %d\n",cap,sm,num);
    }
   
    
    return 0;
}