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
    
    int last_row=r-1;
    for (int i = 0; i < c; i++)
    {
       printf("%d ",a[last_row][i]);
    }
    printf("\n");
    int last_col=c-1;
    for (int i = 0; i < r; i++)
    {
       printf("%d ",a[i][last_col]);
    }
    
    
    return 0;
}