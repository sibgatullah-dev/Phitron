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
    int n,m;scanf("%d %d",&n,&m);
    printf("%d",a[n][m]);
    
    return 0;
}