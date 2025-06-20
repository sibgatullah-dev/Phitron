#include<stdio.h>
int main(){

    int L,R;
    scanf("%d %d",&L,&R);
    int flag = 0;

    for (int i = L; i <= R; i++)
    {
        int even=0,odd=0;

        for (int  num = i; num > 0;num/=10)
        {
            int digit = num%10;
            if (digit%2==0)
            {
                even++;
            }else{
                odd++;
            }
        }
        
        if (even==odd)
        {
            printf("%d\n",i);
            flag = 1;
        } 
    }
    if (flag==0)
    {
        printf("-1\n");
    }

    return 0;
}