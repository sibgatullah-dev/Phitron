#include<stdio.h>
int main(){
    int n,k;scanf("%d %d",&n,&k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int  i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }

    int l=0,r=n-1,count=0;
    while (l<r)
    {
        if (a[l]+a[r]<=k)
        {
            count++;
            l++;
            r--;
        }else{
            r--;
        }
        
        
    }
    printf("%d",count);
    
    return 0;
}