#include<stdio.h>
int main(){
    int x,y,T;
    scanf("%d %d %d",&T,&x,&y);
   for (int tc = 1; tc <= T; tc++)
   {
    scanf("%d %d",&x,&y);

    if (x>y){
        int z = x;
        x = y;
        y = z;
    }   

    int sum = 0;
    for (int i = x+1; i < y; i++)
    {
        if(i%2!=0){
            sum = sum+i;
        }
    }
    printf("%d\n",sum);
}
   
    
    return 0;
}