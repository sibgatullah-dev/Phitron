#include<stdio.h>
int main(){
    int r,c ; scanf("%d %d",&r , &c );
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
   
    int zero = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==0)
            {
                zero++;
            }
        }
        
    }
    if (zero==0)
    {
        printf("Zero matrix");
    }else{
        printf("Not Zero Matrix");
    }
    
    
    return 0;
}