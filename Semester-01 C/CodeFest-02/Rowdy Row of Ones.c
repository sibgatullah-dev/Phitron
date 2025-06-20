#include<stdio.h>
int main(){
    int n,m;scanf("%d %d",&n,&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    int ones = -1,index = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j]==1)
            {
                count++;
            }
            
        }
        if (count>ones)
        {
            ones = count;
            index++;
        }
       
    }
    printf("%d",index);
    
    return 0;
}
